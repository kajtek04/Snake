SOURCE = main.cpp game/*.cpp
FLAGS = -Wall -pedantic
LIBS = -lncurses
OUT = snake.o
VALGRIND_FLAGS = --leak-check=full --show-leak-kinds=all --log-file=valgrind.rpt -s

all: compile out

compile:
	rm -rf $(OUT)
	g++ $(FLAGS) $(SOURCE) -o $(OUT) $(LIBS)

out:
	./$(OUT)

check:
	valgrind $(VALGRIND_FLAGS) ./$(OUT)
	cat valgrind.rpt