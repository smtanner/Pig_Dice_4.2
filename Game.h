//
// Created by administrator on 2/20/25.
//

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

#endif //GAME_H
