#pragma once

#include <iostream>
#include <ncurses.h>
#include <vector>

#define BOARD_SIZE 15
#define SNAKE_SIZE 5

#define SNAKE_START_X 7
#define SNAKE_START_Y 7

enum direction{
    UP,
    DOWN,
    LEFT,
    RIGHT
};

enum object{
    BODY,
    FRUIT,
    WALL
};