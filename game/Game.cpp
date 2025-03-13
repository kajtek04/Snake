#include "Game.hpp"

Game::Game(){
    Score = 0;
    spawnFruit();
}

Game::~Game(){
}

void Game::init(){
    initscr();
    printw("Hello, World!");
    refresh();
    getch();
    endwin();
}

void Game::spawnFruit(){
    int x, y;
    do{
        x = rand() % BOARD_SIZE;
        y = rand() % BOARD_SIZE;
    } while(!checkFruitPlacement(x, y));
    Fruit.x = x;
    Fruit.y = y;
}

bool Game::checkFruitPlacement(int x, int y){
    for(auto segment : snake.getBody()){
        if(segment.x == x && segment.y == y){
            return false;
        }
    }
    return true;
}