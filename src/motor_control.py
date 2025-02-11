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
    response = ser.read(8) #8 byte
    if response:
        print(f"Response from motor {motor_id}: {response.hex()}")
        return response
    else:
        print(f"No response from motor {motor_id}.")
        return None

def control_leg1(ser):
    """Control all motors as per pos == 1 in leg1.cpp."""
    # Motors and parameters
    commands = [
        (0x88, 2, 0, 10),   # Motor 2, angle 0, speed 10
        (0x88, 5, 0, 10),   # Motor 5, angle 0, speed 10
        (0x88, 8, 0, 10),   # Motor 8, angle 0, speed 10
        (0x88, 1, -45 + 5, 10),  # Motor 1, angle -45 + offset, speed 10
        (0x88, 4, -45 + 50, 10), # Motor 4, angle -45 + offset, speed 10
        (0x88, 7, -45 + 30, 10)  # Motor 7, angle -45 + offset, speed 10
    ]

    for cmd, motor_id, angle, speed in commands:
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

            control_leg1(ser)

            print("Motor control test for pos == 1 completed.")
    except serial.SerialException as e:
        print(f"Error: {e}")

if __name__ == "__main__":
    main()
