// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Roman Cernetchi
// Created on: January 2021
// This program rounds a decimal

#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>


void decimalRound(float &number, float decimal) {
    // rounds a decimal

    // process
    number = number * pow(10, decimal) + 0.5;
    number = static_cast<int>(number);
    number = number / pow(10, decimal);
}

int main() {
    // input the radius and height
    std::string userNumber;
    float userNum;
    std::string userDecP;
    float decPlace;

    // input
    while (true) {
        try {
            // input
            std::cout << "Enter the number you want to round: ";
            std::cin >> userNumber;
            userNum = std::stof(userNumber);
            std::cout << "Enter how many decimal places you want to round by: ";
            std::cin >> userDecP;
            decPlace = std::stof(userDecP);
            std::cout << "" << std::endl;

            decimalRound(userNum, decPlace);

            break;
        } catch (std::invalid_argument) {
            std::cout << "This was not a number, try again." << std::endl;
        }
    }

    // output
    std::cout << "The rounded number is " << userNum << std::endl;
}
