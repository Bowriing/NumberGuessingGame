//
// Created by ebowring on 26/07/2025.
//

#ifndef LEADERBOARD_H
#define LEADERBOARD_H
#include <string>
#include <vector>

class Entry {
public:
    std::string username;
    int score;

    //Used to set the property of entry used for sorting
    bool operator<(const Entry& other) const {
        return score < other.score;
    }

};

class Leaderboard
{
    public:
        Leaderboard() {
            void Init();
        };

        void ReadFromCSV();
        void Init();
        void Print() const;
        void SaveToCSV();

        void AddEntry(const Entry& e);


    private:
        std::vector<Entry> leaderboard;
};

#endif //LEADERBOARD_H
