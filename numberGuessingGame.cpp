//
// Created by ebowring on 25/07/2025.
//

#include <random>
#include <iostream>

int main(){

    //Declare all variables first
    int iNum = 0;
    int iGuess = 0;
    bool bGuessed = false;
    int iAttempts = 1;
    std::string sUsername;

    //Welcome player and get relevant information
    std::cout << "Please enter your username!\n";
    getline(std::cin, sUsername);
    std::cout << "Hello " << sUsername << ", Welcome to ebowring's Number Guessing Game!\n" << std::endl;

    //Generate random number -- Uses Mersenne tittie twister algorithm
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(1, 100);
    iNum = dis(gen);
    std::cout << iNum << std::endl;

    //Guessing loop
    while(!bGuessed && iAttempts < 10){

        std::cout << "Please guess a number (1-100): \n";
        std::cin >> iGuess;

        if (iGuess <= 0 || iGuess > 100) {
            std::cout << "Exceeds random number boundaries - please choose between 1-100\n";
        }

        else if (iGuess == iNum) {
            std::cout << "You Guessed It!\n" << "In a total of " << iAttempts << " attempts." << std::endl;
            bGuessed = true;
        }

        else if (iGuess > iNum) {
            std::cout << "Too High!\n";
        }

        else if (iGuess < iNum) {
            std::cout << "Too Low!\n";
        }

        iAttempts++;
    }

    //Fail Message
    std::cout << "You have failed to guess in 15 attempts, you lose >:D" << "\n";

    //Save players information to leaderboard
    //Need to implement using a scalable storage/database system - depending on if I want an online leaderboard or not


    return 0;
}