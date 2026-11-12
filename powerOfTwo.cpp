// copyright (c) 2026 all rights reserved
// created by : Adrian student
// Date : 11th NOV 2026
// This programs asks the user to enter a positive integer
// it then uses a for loop to calculate and display the
// “square” (power of 2) starting from 0 until this number
#include <iostream>
#include <string>
#include <cmath>

int main() {
    // declare variables
    std::string userNumberStr;
    float userNumberFloat;
    int powerOfSquare;

    // set counter
    int counter = 0;

    // get the user number
    std::cout << "Enter a positive number : ";
    std::cin >> userNumberStr;
    std::cout << "\n";
    try {
        // cast the user number from string to float
        userNumberFloat = std::stof(userNumberStr);
        // check if user number is a whole number
        if (userNumberFloat == static_cast<int>(userNumberFloat)) {
            // check if user number is a positive number
            if (userNumberFloat >= 0) {
                for (counter = 0; counter <= userNumberFloat; counter++) {
                    powerOfSquare = pow(counter , 2);
                    std::cout << counter << "² = " << powerOfSquare;
                    std::cout << "\n";
                }
            } else {
                std::cout << userNumberFloat << " is not a positive number";
                std::cout << "\n";
            }
        } else {
            std::cout << userNumberFloat << " is not an integer";
            std::cout << "\n";
        }
    } catch(std::invalid_argument) {
        std::cout << userNumberStr << " is not an integer";
        std::cout << "\n";
    }
    std::cout << "Thanks for playing";
    std::cout << "\n";
}
