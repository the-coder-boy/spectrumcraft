OBJS=src/main.cpp

OBJ_NAME=SpectrumCraft

all:Build
Build:
	g++ $(OBJS) -Wall -Werror -lSDL2 -o $(OBJ_NAME)