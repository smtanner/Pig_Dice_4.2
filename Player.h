//
// Created by administrator on 2/20/25.
//

#ifndef PLAYER_H
#define PLAYER_H

class Player {
private:
    int score;
public:
    Player() : score(0) {}
    void addScore(int points) { score += points; }
    int getScore() const { return score; }
};

#endif //PLAYER_H
