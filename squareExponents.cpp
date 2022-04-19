// Copyright (c) 2022 Aidan Lalonde-Novales All rights reserved

// Created by Aidan Lalonde-Novales
// Created on 2022-04-19
// This program calculates square exponents using a for loop

#include <iostream>
#include <string>

int main() {
    // this function calculates a square exponents
    std::string integerInputString;
    int numberSquared = 0;
    int answer = 0;
    int integerInput;

    // input
    std::cout << "Enter a positive integer: ";
    std::cin >> integerInputString;

    // process & output
    try {
        integerInput = std::stoi(integerInputString);

        if (integerInput >= 0) {
            for (int numberSquared = 0; numberSquared < integerInput + 1;
            numberSquared++) {
                answer = numberSquared * numberSquared;
                std::cout << numberSquared << "² = " << answer << std::endl;
            }
        } else {
            std::cout << "Sorry, this program only accepts positive integers."
            << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "Sorry, that is not a valid integer." << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
