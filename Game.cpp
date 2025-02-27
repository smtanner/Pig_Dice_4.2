#include "Game.h"
#include <iostream>
using namespace std;


void Game::printRules() {
    cout << "Let's Play PIG Dice!" << endl;
    cout << "* See how many turns it takes you to get to 20." << endl;
    cout << "* Turn ends when you hold or roll a 1." << endl;
    cout << "* If you roll a 1, you lose all points for the turn." << endl;
    cout << "* If you hold, you save all points for the turn." << endl;
}


void Game::play() {
    printRules();
    int turnNumber = 1; // Initialize turn number
    while (!gameEnd) {
        cout << "\nTURN " << turnNumber << endl;
        Turn turn;
        turn.takeTurn(player);
        if (player.getScore() >= 20) {
            gameEnd = true;
            cout << "\nYou finished with a final score of 20 or more in " << turnNumber << " turns!" << endl;
        }
        turnNumber++; // Increment turn number after each turn
    }
}





