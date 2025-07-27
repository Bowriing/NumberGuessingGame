//
// Created by ebowring on 25/07/2025.
//

#include <fstream>
#include <random>
#include <iostream>
#include "Player Leaderboard/leaderboard.h"

int main(){

    int targetNum = 0;
    int amountOfGuesses = 0;
    bool guessed = false;
    int attempts = 0;
    std::string username;
    Leaderboard leaderboard;
    leaderboard.Init();


    //Welcome player and get relevant information
    std::cout << "Please enter your username!\n";
    while(username.length() ==0) {
        getline(std::cin, username);
    }
    std::cout << "Hello " << username << ", Welcome to ebowring's Number Guessing Game!\n" << std::endl;

    //Generate random number -- Uses Mersenne twister algorithm
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(1, 100);
    targetNum = dis(gen);
    std::cout << targetNum << std::endl;

    //Guessing loop
    while(!guessed && attempts < 10){

        std::cout << "Please guess a number (1-100): \n";
        std::cin >> amountOfGuesses;

        if (amountOfGuesses <= 0 || amountOfGuesses > 100) {
            std::cout << "Exceeds random number boundaries - please choose between 1-100\n";
        }

        else if (amountOfGuesses == targetNum) {
            std::cout << "You Guessed It!\n" << "In a total of " << attempts << " attempts." << std::endl;
            guessed = true;
        }

        else if (amountOfGuesses > targetNum) {
            std::cout << "Too High!\n";
        }

        else if (amountOfGuesses < targetNum) {
            std::cout << "Too Low!\n";
        }

        else {
            std::cout << "You have failed to guess in 15 attempts, you lose >:D" << "\n";
        }

        attempts++;
    }



    //Save players information to leaderboard
    //Need to implement using a scalable storage/database system - depending on if I want an online leaderboard or not
    leaderboard.AddEntry(Entry(username, attempts));
    leaderboard.SaveToCSV();
    leaderboard.Print();

    return 0;
}
