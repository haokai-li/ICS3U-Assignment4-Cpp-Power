// Copyright (c) 2021 haokai All rights reserved
//
// Created by: Haokai
// Created on: Oct 2021
// This Program is about power

#include <iostream>
#include <string>

int main() {
    // This Program is about power
    int loopNumber = 0;
    int answerNumber = 1;

    std::string firstString;
    int firstNumberInt;
    float firstNumberFloat;

    std::string secondString;
    int secondNumberInt;
    float secondNumberFloat;

    // input
    std::cout << "Please enter a positive integer for the number: ";
    std::cin >> firstString;
    std::cout << "Please enter a positive integer for the power: ";
    std::cin >> secondString;
    std::cout << "" << std::endl;

    // process
    try {
        firstNumberFloat = std::stof(firstString);
        firstNumberInt = std::stoi(firstString);
        secondNumberFloat = std::stof(secondString);
        secondNumberInt = std::stoi(secondString);

        if (firstNumberFloat == firstNumberInt
        & secondNumberFloat == secondNumberInt) {
            while (loopNumber < secondNumberInt) {
                loopNumber = loopNumber + 1;
                answerNumber = answerNumber * firstNumberInt;
            }

            // output
            std::cout << "Answer: " << answerNumber << std::endl;

        } else {
            // output
            std::cout << "You didn't enter an integer." << std::endl;
        }
    } catch (std::invalid_argument) {
        // output
        std::cout << "You didn't enter an integer." << std::endl;
    }

    std::cout << "\nDone." << std::endl;
}
