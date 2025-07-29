//
// Created by ebowring on 26/07/2025.
//

#include "leaderboard.h"

#include <algorithm>
#include <fstream>
#include <iostream>
#include <string>


void Leaderboard::ReadFromCSV(){

    std::string filename = "leaderboard.csv";
    std::ifstream file(filename);
    std::vector<Entry> leaderboard;

    if (!file.is_open()) {
        std::cerr << "Could not open file " << filename << std::endl;
    }

    while (file.peek() != EOF) {
        std::string line;
        std::getline(file, line);
        std::string delimiter = ",";

        std::string name = line.substr(0, line.find(delimiter));
        int score = stoi(line.substr(line.find(delimiter) + 1));

        AddEntry(Entry(name, score));

    }

    file.close();
}

void Leaderboard::Init() {
    ReadFromCSV();
}

void Leaderboard::AddEntry(const Entry& e) {
    leaderboard.push_back(e);
}

void Leaderboard::Print() const {
    std::cout << "=====Leaderboard=====" << std::endl;

    for (const Entry & i : leaderboard) {
        std::cout << i.username << " " << i.score << "\n";
    }
}

void Leaderboard::SaveToCSV() {
    std::string filename = "leaderboard.csv";
    std::ofstream file(filename);

    sort(leaderboard.begin(), leaderboard.end());

    for (Entry& e: leaderboard) {
        file << e.username << "," << e.score << "\n";
    }

    file.close();

    std::cout << "Saved to CSV funtion executed" << std::endl;

}