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

        void draw();
        void input();
        void logic();
        void spawnFruit();
        object checkCollision();
};