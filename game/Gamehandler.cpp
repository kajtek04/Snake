#include "GameHandler.hpp"

GameHandler::GameHandler(){
    game = Game();
    initscr();
    noecho();
    raw();
    refresh();
    win = newwin(BOARD_SIZE, BOARD_SIZE, 5, 5);
    box(win, 0, 0);
    wrefresh(win);
    refresh();
}

GameHandler::~GameHandler(){
}

void GameHandler::run(){

    while(1){
        draw();
        getch();
    }
    endwin();
}

void GameHandler::draw(){
    for(auto object : game.getDrawObjects()){
        mvwaddch(win, object.y, object.x, object.type);
    }
    wrefresh(win);
    refresh();
}