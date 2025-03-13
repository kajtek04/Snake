#include "GameHandler.hpp"

GameHandler::GameHandler(){
    game = Game();
    initscr();
}

GameHandler::~GameHandler(){
}

void GameHandler::run(){
    game.init();

    WINDOW *win = newwin(BOARD_SIZE, BOARD_SIZE, 5, 5);
    box(win, 0, 0);
    wrefresh(win);
    wprintw(win, "Hello, World!");
    refresh();

    getch();
    endwin();


}