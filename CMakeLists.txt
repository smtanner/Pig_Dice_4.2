cmake_minimum_required(VERSION 3.29)
project(Pig_Dice_4)

set(CMAKE_CXX_STANDARD 20)

add_executable(Pig_Dice_4 main.cpp
        Die.cpp
        Die.h
        Player.h
        Turn.cpp
        Turn.h
        Game.cpp
        Game.h)
