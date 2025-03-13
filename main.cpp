#include "utility/defines.hpp"
#include "game/GameHandler.hpp"

int main(){
    GameHandler* gameHandler = new GameHandler();
    gameHandler->run();
    return 0;
}
