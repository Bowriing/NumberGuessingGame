//
// Created by ebowring on 25/07/2025.
//

#include <iostream>

int fSwitch() {
    char grade;

    std::cout << "Please enter your grade A-E Uppercase.  ";
    std::cin >> grade;

    switch(grade) {
        case 'A':
            std::cout << "Wow Amazing!\n";
            break;

        case 'B':
            std::cout << "Great work!\n";
            break;

        case 'C':
            std::cout << "Well done.\n";
            break;

        case 'D':
            std::cout << "So close!\n";
            break;

        case 'E':
            std::cout << "Try harder next time.\n";
            break;

        default:
            std::cout << "Invalid - Please only grades (A-E) Capital Only!!!\n";
    }

    return 0;
}