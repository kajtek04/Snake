#include "Game.hpp"

Game::Game(){
    Score = 0;
    spawnFruit();
}

Game::~Game(){
}

void Game::init(){
    
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

std::vector<drawObject> Game::getDrawObjects(){
    std::vector<drawObject> objects;
    for(auto segment : snake.getBody()){
        objects.push_back({'o', segment.x, segment.y});
    }
    objects.push_back({'f', Fruit.x, Fruit.y});
    objects[0].type = 'H';
    std::cout<<"|||"<<objects[0].type<<"|||\n";
    return objects;
}