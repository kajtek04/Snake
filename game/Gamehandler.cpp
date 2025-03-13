#include "GameHandler.hpp"

GameHandler::GameHandler(){
    game = Game();
}

GameHandler::~GameHandler(){
}

void GameHandler::run(){
    game.init();
}