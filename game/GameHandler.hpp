#pragma once
#include "../utility/defines.hpp"
#include "Game.hpp"

class GameHandler{
    private:
        Game game;

    public:
        GameHandler();
        ~GameHandler();

        void run();
        void draw();
};