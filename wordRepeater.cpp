// Copyright (c) 2024 Jayden Smith All rights reserved.
// Created by: Jayden Smith
// Date: April 29, 2024
// This program repeaters a user given word as many times they want.

#include <iostream>
#include <string>

int main() {
    // Define my variables
    std::string userWordAsString;
    std::string userLengthAsString;
    std::string userCopiesAsString;
    int userLengthInt;
    int userCopiesInt;
    float userLengthFloat;
    float userCopiesFloat;

    // Welcome user
    std::cout << "Welcome to Jayden's Word Repeater!\n";

    // Set the loop and asking the user for their input
    while (true) {
        std::cout << "What is your word? ";
        std::cin >> userWordAsString;
        std::cout << "What is length of your subword? ";
        std::cin >> userLengthAsString;
        std::cout << "How many copies do you want to have? ";
        std::cin >> userCopiesAsString;
       try {
            // Convert inputs to integers
            userLengthInt = std::stoi(userLengthAsString);
            userCopiesInt = std::stoi(userCopiesAsString);
            userLengthFloat = std::stof(userLengthAsString);
            userCopiesFloat = std::stof(userCopiesAsString);

        // Check for decimals
        if ((userLengthFloat != userLengthInt)
        || (userCopiesFloat != userCopiesInt)) {
            std::cout << "Please enter whole numbers only!\n";
        }

        // Checks if it is between 0 and the length of your subword
        // Source https://stackoverflow.com/questions/58372281/determining-the-amount-of-letters-in-each-word-of-a-string-in-c
        if (userLengthInt < 0 || userLengthInt > userWordAsString.length()) {
            std::cout <<
             "Subword length must be between 0 and the length of your word!\n";
            std::cout << "\n";

        // If not it checks if the user copies is not negative
        } else {
            if (userCopiesInt < 0) {
                std::cout << "Number of copies must be a positive integer!\n";
                } else {
                    break;
                }
        }
    }  catch (std::invalid_argument) {
        std::cout << "Please enter a valid number!\n";
        }
    }

    // Creates the substring
    // Source: https://www.boardinfinity.com/blog/understanding-substr-function-in-c/
    std::string subword = userWordAsString.substr(0, userLengthInt);

    for (int copiesTracker = 0; copiesTracker
         < userCopiesInt; copiesTracker++) {
        std::cout << subword << std::endl;
        }
    }


