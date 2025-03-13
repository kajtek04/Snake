#include "../utility/defines.hpp"

struct snakeSegment{
    int x, y;
    direction dir;
};

class Snake{
    private:
        direction headDir;
        std::vector<snakeSegment> body;
    public:
        Snake();
        ~Snake();

        void move();
        void grow();
        void changeDirection(direction dir);

        vector<snakeSegment> getBody();
};