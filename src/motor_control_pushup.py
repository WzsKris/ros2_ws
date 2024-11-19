#!/usr/bin/env python3
import serial
import time

def calculate_checksum(data):
    """Calculate the checksum for a given data frame."""
    return sum(data) & 0xFF

def build_command_frame(cmd, motor_id, data_length, data=[]):
    """Build a command frame for the motor."""
    frame = [0x3E, cmd, motor_id, data_length] + data
    checksum = calculate_checksum(frame)
    frame.append(checksum)
    return bytearray(frame)

def send_command(ser, cmd, motor_id, angle, speed):
    """Send a command frame to the motor and read the response."""
    data_length = 0x02  # Length of angle and speed data
    data = [angle & 0xFF, speed & 0xFF]  # Send lower bytes of angle and speed
    command_frame = build_command_frame(cmd, motor_id, data_length, data)
    
    print(f"Sending command to motor {motor_id}: {command_frame.hex()}")
    ser.write(command_frame)

    # Read response
    response = ser.read(8)
    if response:
        print(f"Response from motor {motor_id}: {response.hex()}")
        return response
    else:
        print(f"No response from motor {motor_id}.")
        return None

def control_leg1_pos5(ser):
    """Control all motors as per pos == 5 in leg1.cpp, with push-up sequence."""
    # Push-up sequence
    pushup_commands = [
        (0x88, 2, -90, 30),    # Motor 2, angle -90, speed 30
        (0x88, 5, -90, 30),    # Motor 5, angle -90, speed 30
        (0x88, 8, -90, 30),    # Motor 8, angle -90, speed 30
        (0x88, 1, -270 + 5, 30),  # Motor 1, angle -270 + offset, speed 30
        (0x88, 4, -270 + 50, 30), # Motor 4, angle -270 + offset, speed 30
        (0x88, 7, -270 + 30, 30)  # Motor 7, angle -270 + offset, speed 30
    ]

    pushup_reset_commands = [
        (0x88, 2, -120, 30),    # Reset motor 2
        (0x88, 5, -120, 30),    # Reset motor 5
        (0x88, 8, -120, 30),    # Reset motor 8
        (0x88, 1, -250 + 5, 30),  # Reset motor 1
        (0x88, 4, -250 + 50, 30), # Reset motor 4
        (0x88, 7, -250 + 30, 30)  # Reset motor 7
    ]

    for _ in range(5):  # Perform 5 push-up motions
        for cmd, motor_id, angle, speed in pushup_commands:
            send_command(ser, cmd, motor_id, angle, speed)
            time.sleep(0.1)  

        time.sleep(5)  # Wait 5 seconds between push-ups

        for cmd, motor_id, angle, speed in pushup_reset_commands:
            send_command(ser, cmd, motor_id, angle, speed)
            time.sleep(0.1)  

def main():
    # Serial port configuration
    serial_port = '/dev/ttyACM0'
    baudrate = 115200  
    timeout = 1        

    try:
        with serial.Serial(serial_port, baudrate, timeout=timeout) as ser:
            print(f"Connected to {serial_port} at {baudrate} baud.")

            control_leg1_pos5(ser)

            print("Motor control test for pos == 5 completed.")
    except serial.SerialException as e:
        print(f"Error: {e}")

if __name__ == "__main__":
    main()
