//
// Created by administrator on 2/20/25.
//

#ifndef DIE_H
#define DIE_H

#include <iostream>
#include <cstdlib>
class Die {
private:
    int value;
    int sides;
    public:
    Die(int s = 6) : sides(s) { srand(time(0)); }
    int roll();
};

#endif //DIE_H
