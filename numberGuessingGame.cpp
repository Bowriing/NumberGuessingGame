//
// Created by ebowring on 25/07/2025.
//

#include <iostream>

int main(){

    //Declare all variables first
    int iNum = 0;
    int iGuess = 0;
    bool bGuessed = false;
    int iAttempts = 0;
    std::string sUsername = "";

    //Welcome player and get relevant information
    std::cout << "Welcome to BOWRING's Number Guessing Game!\n" << "Please enter your username!" << std::endl;
    getline(std::cin, sUsername);

    //Generate random number with time as seed for generation
    srand(time(nullptr));
    iNum = (rand() % 100) + 1;

    //Guessing loop - will max out after 15 attempts
    while(!bGuessed && iAttempts < 15){
        std::cout << "Please guess a number (1-100): \n";
        std::cin >> iGuess;

        if (iGuess == iNum) {
            std::cout << "You Guessed It!\n";
            bGuessed = true;
        }

        else if (iGuess > iNum) {
            std::cout << "Too High! Try Again.\n";
        }

        else {
            std::cout << "Too Low! Try Again.\n";
        }

        iAttempts++;
    }

    //Save players information to leaderboard


    return 0;
}