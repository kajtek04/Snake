#pragma once
#include "../utility/defines.hpp"
#include "Snake.hpp"

struct fruit{
    int x, y;
};

class Game{
    private:
        Snake snake;
        fruit Fruit;
        int Score;

    public:
        Game();
        ~Game();

        void init();
        void input();
        void logic();
        void spawnFruit();
        bool checkFruitPlacement(int x, int y);
        object checkCollision();
};