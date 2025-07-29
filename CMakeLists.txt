cmake_minimum_required(VERSION 3.31)
project(untitled)

set(CMAKE_CXX_STANDARD 20)

add_executable(untitled archive/main1.cpp
        archive/cmath.cpp
        archive/switch.cpp
        archive/ternaryOperator.cpp
        numberGuessingGame.cpp
        "Player Leaderboard/leaderboard.cpp"
        "Player Leaderboard/leaderboard.h"
)
