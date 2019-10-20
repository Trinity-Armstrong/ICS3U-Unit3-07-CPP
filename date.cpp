// Copyright (c) 2019 Trinity Armstrong All rights reserved.
//
// Created by: Trinity Armstrong
// Created on: October 2019
// This program tells you if you have the grandmothers approval

#include <iostream>
#include <string>

int main() {
    // This function tells you if you have the grandmothers approval

    // variables
    std::string userRich;
    std::string userGoodLooking;

    // Input
    std::cout << "Can I date your granddaughter?" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Are you rich (answer yes or no): " << std::endl;
    std::cin >> userRich;
    std::cout << "Are you good looking (answer yes or no):" << std::endl;
    std::cin >> userGoodLooking;
    std::cout << "" << std::endl;

    // Process & output
    if (userRich == "yes" || userGoodLooking == "yes") {
        std::cout << "You can date my granddaughter!" << std::endl;
    } else if (userRich == "no" && userGoodLooking == "no") {
          std::cout << "You cannot date my granddaughter." << std::endl;
    } else {
            std::cout << "Error!";
    }
}
