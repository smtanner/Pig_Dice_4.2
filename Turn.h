//
// Created by administrator on 2/20/25.
//

#ifndef TURN_H
#define TURN_H


#include "Die.h"
#include "Player.h"


class Turn {
private:
    int turnScore;
    bool turnEnd;
    Die die;
public:
    Turn() : turnScore(0), turnEnd(false) {}
    void takeTurn(Player& player);
    void rollDie();
    void hold(Player& player);
};



#endif //TURN_H
