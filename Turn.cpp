//
// Created by administrator on 2/20/25.
//

#include "Turn.h"
#include <iostream>
using namespace std;


void Turn::takeTurn(Player& player) {
    turnEnd = false;
    char choice;
    while (!turnEnd) {
        cout << "Roll or hold? (r/h): ";
        cin >> choice;
        if (choice == 'r') {
            rollDie();
            if (turnEnd) {
                cout << "Turn over. No Score." << endl;
            }
        } else if (choice == 'h') {
            hold(player);
        } else {
            cout << "Invalid choice! Try again." << endl;
        }
    }
}


void Turn::rollDie() {
    int roll = die.roll();
    cout << "Die: " << roll << endl;
    if (roll == 1) {
        turnScore = 0;
        turnEnd = true;
    } else {
        turnScore += roll;
    }
}


void Turn::hold(Player& player) {
    player.addScore(turnScore);
    cout << "Score for turn: " << turnScore << endl;
    cout << "Total Score: " << player.getScore() << endl;
    turnScore = 0;
    turnEnd = true;
}


// Game.h
#ifndef GAME_H
#define GAME_H


#include "Player.h"
#include "Turn.h"


class Game {
private:
    Player player;
    bool gameEnd;
public:
    Game() : gameEnd(false) {}
    void play();
    void printRules();
};


#endif


