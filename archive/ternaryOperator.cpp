//
// Created by ebowring on 25/07/2025.
//

#include <iostream>

int ternary() {
    //ternary operator ?: = replacement to an if else statement
    // condition ? expression1 : expression2;

    int grade = 0;

    std::cout << "Enter your grade 0-100:   ";
    std::cin >> grade;

    //Standard Method

    // if (grade < 50){
    //     std::cout << "You Failed!";
    // }
    // else if (grade >= 50) {
    //     std::cout << "You Passed!";
    // }

    // Using Ternary Operator

    //condition   //expression IF TRUE         //expression IF FALSE
    grade >= 50 ? std::cout << "You Pass!\n" : std::cout << "You Fail!\n";

    return 0;
}