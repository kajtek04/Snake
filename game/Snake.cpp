#include "Snake.hpp"

Snake::Snake(){
    body.push_back({SNAKE_START_X, SNAKE_START_Y, UP});
    headDir = UP;

    for(int i = 1 ; i<SNAKE_SIZE ; i++){
        snakeSegment segment;
        segment.x = SNAKE_START_X;
        segment.y = SNAKE_START_Y + i;
        segment.dir = UP;
        body.push_back(segment);
    }
}

Snake::~Snake(){
    body.clear();
}

void Snake::move(){
    for(int i = body.size()-1 ; i>0 ; i--){
        body[i].x = body[i-1].x;
        body[i].y = body[i-1].y;
    }
    body[0].dir = headDir;

    for(auto& segment : body){
        int xchange, ychange;
        xchange = (segment.dir == LEFT) ? -1 : (segment.dir == RIGHT) ? 1 : 0;
        ychange = (segment.dir == UP) ? -1 : (segment.dir == DOWN) ? 1 : 0;
        segment.x += xchange;
        segment.y += ychange;
    }
}

void Snake::grow(){
    snakeSegment segment;
    segment.x = body[body.size()-1].x;
    segment.y = body[body.size()-1].y;
    segment.dir = body[body.size()-1].dir;
    body.push_back(segment);
}

void Snake::changeDirection(direction dir){
    if((headDir == UP && dir == DOWN) || (headDir == DOWN && dir == UP) || (headDir == LEFT && dir == RIGHT) || (headDir == RIGHT && dir == LEFT)){
        return;
    }
    headDir = dir;
}

std::vector<snakeSegment> Snake::getBody(){
    return body;
}