#include <boost/asio.hpp>
#include <iostream>

int main() {
    try {
        boost::asio::io_context io;
        boost::asio::serial_port serial(io, "/dev/ttyACM0");

        // Configure the serial port
        serial.set_option(boost::asio::serial_port_base::baud_rate(115200));
        serial.set_option(boost::asio::serial_port_base::character_size(8));
        serial.set_option(boost::asio::serial_port_base::stop_bits(boost::asio::serial_port_base::stop_bits::one));
        serial.set_option(boost::asio::serial_port_base::parity(boost::asio::serial_port_base::parity::none));
        serial.set_option(boost::asio::serial_port_base::flow_control(boost::asio::serial_port_base::flow_control::none));

        std::string data = "Hello, RS485!";
        boost::asio::write(serial, boost::asio::buffer(data));

        std::cout << "Data sent successfully." << std::endl;
    } catch (std::exception &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}

