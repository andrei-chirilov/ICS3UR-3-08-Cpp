// Copyright (c) 2019 Andrei Chirilov All rights reserved.
//
// Created by: Andrei Chirilov
// Created on: October 2019
// This program does nested if statements

#include <iostream>
#include <string>

int main() {
    std::string year;
    int number;


    std::cout << "Enter a year: ";
    std::cin >> year;

    try {
        number = std::stoi(year);
        if (number % 4 == 0) {
            if (number % 100 == 0) {
                if (number % 400 == 0)
                    std::cout << year << " is a leap year.";
                else
                    std::cout << year << " is not a leap year.";
            } else {
                std::cout << year << " is a leap year.";
            }
        } else {
            std::cout << year << " is not a leap year.";
        }
    }
    catch (std::invalid_argument) {
        std::cout << "This wasn't a valid entry, please try again";
    }
}
