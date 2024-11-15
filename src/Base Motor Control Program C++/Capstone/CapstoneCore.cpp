#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>
#include <cstdint>
#include <chrono>
#include <cstdlib>
#include <thread>
#include <iomanip>
#include <boost/asio.hpp>

#include "Core.h"

using namespace std;
using namespace boost::asio;
using boost::system::error_code;
using namespace std::chrono;

int main() {
    
    //vector<vector<vector<uint8_t>>> csvData = readCSVFile("D:\\isaac\\Documents\\LegControlls\\leg.csv");
    //Define Torque

    boost::asio::io_context io;
    // Replace "/dev/ttyUSB0" with your serial port name
    // On Windows, this might be something like "COM3"
    boost::asio::serial_port serial(io, "/dev/ttyACM0");
    

    // Configure serial port options
    serial.set_option(serial_port_base::baud_rate(115200));
    serial.set_option(serial_port_base::character_size(8));
    serial.set_option(serial_port_base::stop_bits(serial_port_base::stop_bits::one));
    serial.set_option(serial_port_base::parity(serial_port_base::parity::none));
    serial.set_option(serial_port_base::flow_control(serial_port_base::flow_control::none));
    //Buffer vector used to read incoming data.s
    std::vector<uint8_t> buf(128); // Adjust the size based on expected data in Bytes.
    boost::system::error_code ec;
    
    
    //int speed3 = 10;
    //int angle3 = 0;
    //cout << "Command Sent" << endl;
    //universialControl(13, 1,angle3, speed3, 0, 0, serial); //M1 144
    //cout << "Waiting for Response"<< endl;
    //readResponse(serial, buf, ec)[3];
    

    vector<double>position;
    
    //universialControl(19, 5,0, 0, 0, 0, serial);
    //readResponse(serial, buf, ec)[3];
    
    int hip = 0;
    int upper = 0;
    int lower = 0;





    if(hip == 1){
        
        //hip
        int speed3 = 10;
        int angle3 = 0;
        for(int i=0; i<=100;i++ ){
            cout << "Command Sent" << endl;
            universialControl(13, 3,angle3, speed3, 0, 0, serial); //M1 144
        }
        
    }

    if(upper == 1){
        //Upper Limb
        int speed = 10;
        int angle = -150;

        //universialControl(13, 2,angle, speed, 0, 0, serial); //M1 144
        //readResponse(serial, buf, ec)[3];
   
        //universialControl(13, 5,angle, speed, 0, 0, serial); //M1 144
        //readResponse(serial, buf, ec)[3];

        universialControl(13, 8,angle, speed, 0, 0, serial); //M1 144
        readResponse(serial, buf, ec)[3];
    }

    if (lower == 1)
    {
        //Lower Limb
        int speed1 = 10;
        int angle1 = -220;


        //universialControl(13, 1,angle1+5, speed1, 0, 0, serial); //M1 144
        //readResponse(serial, buf, ec)[3];

        //universialControl(13, 4,angle1+60, speed1, 0, 0, serial); //M1 144
        //readResponse(serial, buf, ec)[3];

        universialControl(13, 7,angle1+60, speed1, 0, 0, serial); //M1 144
        readResponse(serial, buf, ec)[3];
    }
    

    for(int i=0;i<=5;i++){
        //upper
        int speed = 20;
        int angle = -150;
        universialControl(13, 8,angle, speed, 0, 0, serial); //M1 144
        readResponse(serial, buf, ec)[3];

        //Lower
        int speed1 = 20;
        int angle1 = -220;
        universialControl(13, 7,angle1+60, speed1, 0, 0, serial); //M1 144
        readResponse(serial, buf, ec)[3];

        std::this_thread::sleep_for(std::chrono::seconds(5)), std::cout << "5 seconds have passed!" << std::endl;

        //Upper
        speed = 20;
        angle = -90;
        universialControl(13, 8,angle, speed, 0, 0, serial); //M1 144
        readResponse(serial, buf, ec)[3];

        //Lower
        speed1 = 20;
        angle1 = -270;
        universialControl(13, 7,angle1+60, speed1, 0, 0, serial); //M1 144
        readResponse(serial, buf, ec)[3];

        std::this_thread::sleep_for(std::chrono::seconds(5)), std::cout << "5 seconds have passed!" << std::endl;

    }


    int pos = 0;

    int m1offset=5;
    int m4offset=50;
    int m7offset=30;


    //For the love of god if you still see this as your state machine please change to a forloop. didnt have time :) <3
    if(pos == 1){

        

        //Upper
        int speed = 10;
        int angle = 0;

        universialControl(13, 2,angle, speed, 0, 0, serial); //M1 144
        readResponse(serial, buf, ec)[3];
   
        universialControl(13, 5,angle, speed, 0, 0, serial); //M1 144
        readResponse(serial, buf, ec)[3];

        universialControl(13, 8,angle, speed, 0, 0, serial); //M1 144
        readResponse(serial, buf, ec)[3];

        //Lower
        int speed1 = 10;
        int angle1 = -45;


        universialControl(13, 1,angle1+m1offset, speed1, 0, 0, serial); //M1 144
        readResponse(serial, buf, ec)[3];

        universialControl(13, 4,angle1+m4offset, speed1, 0, 0, serial); //M1 144
        readResponse(serial, buf, ec)[3];

        universialControl(13, 7,angle1+m7offset, speed1, 0, 0, serial); //M1 144
        readResponse(serial, buf, ec)[3];

    }else if(pos == 2){
        //Upper
        int speed = 10;
        int angle = -50;

        universialControl(13, 2,angle, speed, 0, 0, serial); //M1 144
        readResponse(serial, buf, ec)[3];
   
        universialControl(13, 5,angle, speed, 0, 0, serial); //M1 144
        readResponse(serial, buf, ec)[3];

        universialControl(13, 8,angle, speed, 0, 0, serial); //M1 144
        readResponse(serial, buf, ec)[3];

        //Lower
        int speed1 = 5;
        int angle1 = -290;


        universialControl(13, 1,angle1+m1offset, speed1, 0, 0, serial); //M1 144
        readResponse(serial, buf, ec)[3];

        universialControl(13, 4,angle1+m4offset, speed1, 0, 0, serial); //M1 144
        readResponse(serial, buf, ec)[3];

        universialControl(13, 7,angle1+m7offset, speed1, 0, 0, serial); //M1 144
        readResponse(serial, buf, ec)[3];

    }else if(pos == 3){
        //Upper
        int speed = 30;
        int angle = -90;

        universialControl(13, 2,angle, speed, 0, 0, serial); //M1 144
        readResponse(serial, buf, ec)[3];
   
        universialControl(13, 5,angle, speed, 0, 0, serial); //M1 144
        readResponse(serial, buf, ec)[3];

        universialControl(13, 8,angle, speed, 0, 0, serial); //M1 144
        readResponse(serial, buf, ec)[3];

        //Lower
        int speed1 = 30;
        int angle1 = -270;


        universialControl(13, 1,angle1+m1offset, speed1, 0, 0, serial); //M1 144
        readResponse(serial, buf, ec)[3];

        universialControl(13, 4,angle1+m4offset, speed1, 0, 0, serial); //M1 144
        readResponse(serial, buf, ec)[3];

        universialControl(13, 7,angle1+m7offset, speed1, 0, 0, serial); //M1 144
        readResponse(serial, buf, ec)[3];

    }else if(pos == 4){
        //Upper
        int speed = 30;
        int angle = -120;

        universialControl(13, 2,angle, speed, 0, 0, serial); //M1 144
        readResponse(serial, buf, ec)[3];
   
        universialControl(13, 5,angle, speed, 0, 0, serial); //M1 144
        readResponse(serial, buf, ec)[3];

        universialControl(13, 8,angle, speed, 0, 0, serial); //M1 144
        readResponse(serial, buf, ec)[3];

        //Lower
        int speed1 = 30;
        int angle1 = -250;


        universialControl(13, 1,angle1+m1offset, speed1, 0, 0, serial); //M1 144
        readResponse(serial, buf, ec)[3];

        universialControl(13, 4,angle1+m4offset, speed1, 0, 0, serial); //M1 144
        readResponse(serial, buf, ec)[3];

        universialControl(13, 7,angle1+m7offset, speed1, 0, 0, serial); //M1 144
        readResponse(serial, buf, ec)[3];

    }else if(pos == 5){
        //Upper
        int speed = 30;
        int angle = -120;

        universialControl(13, 2,angle, speed, 0, 0, serial); //M1 144
        readResponse(serial, buf, ec)[3];
   
        universialControl(13, 5,angle, speed, 0, 0, serial); //M1 144
        readResponse(serial, buf, ec)[3];

        universialControl(13, 8,angle, speed, 0, 0, serial); //M1 144
        readResponse(serial, buf, ec)[3];

        //Lower
        int speed1 = 30;
        int angle1 = -250;


        universialControl(13, 1,angle1+m1offset, speed1, 0, 0, serial); //M1 144
        readResponse(serial, buf, ec)[3];

        universialControl(13, 4,angle1+m4offset, speed1, 0, 0, serial); //M1 144
        readResponse(serial, buf, ec)[3];

        universialControl(13, 7,angle1+m7offset, speed1, 0, 0, serial); //M1 144
        readResponse(serial, buf, ec)[3];

    }
    

    
    /*
    //cout << "Command Sent" << endl;
    universialControl(13, 5,angle, speed, 0, 0, serial); //M4 146
    //cout << "Waiting for Response"<< endl;
    readResponse(serial, buf, ec)[3];
    
    //cout << "Command Sent" << endl;
   //universialControl(13, 8,angle, speed, 0, 0, serial); //M7 150
    //cout << "Waiting for Response"<< endl;
    //readResponse(serial, buf, ec)[3];
    
    
    for(int i = 3; i<=9; i++){
        cout << "Command Sent" << endl;
        universialControl(13, i,0, 150, 0, 0, serial);
        cout << "Waiting for Response"<< endl;
        readResponse(serial, buf, ec)[3];
    }
    */
    //universialControl(13, 1,0, 120, 0, 0, serial);
    //readResponse(serial, buf, ec)[3];
    /*
    startTimer();
    int command = 13;
    int command1 = 3;
    int motorID = 1;
    int dps = 3600;
    int i = 360;
    int target = (65533 / 360) * i;
    int targetl = target - (target * 0.015);
    int targeth = target + (target * 0.015);

    universialControl(command, 1, i,dps,0,0, serial);
    
    trackElapsedTime();
    while (1) {


        uint16_t currentPos = readResponse(serial, buf, ec)[3];
        if((targetl <= currentPos) && (currentPos <= targeth)) {
            cout << "Target Reached " << endl;
            
            std::this_thread::sleep_for(std::chrono::milliseconds(1000));
            i += 360;
            universialControl(command, motorID, i,dps,0,0, serial);

        }
        else {
            universialControl(command1, motorID, 360,dps,0,0, serial);
            //readResponse(serial, buf, ec)[3];
            trackElapsedTime();
            cout << "Time elapsed: " << elapsedTimes.back() << " seconds" << endl;
            
        }

    }
    */
   // writeVectorToCSV(position,"D:\isaac\Documents\LegControlls\output.csv");

    return 0;
}

