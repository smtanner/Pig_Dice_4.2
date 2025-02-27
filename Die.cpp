//
// Created by administrator on 2/20/25.
//

#include "Die.h"


int Die::roll() {
    value = rand() % sides + 1;
    return value;
};




