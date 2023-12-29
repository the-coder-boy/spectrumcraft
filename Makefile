OBJS=src/main.cpp src/spectrumWindow.cpp

OBJ_NAME=SpectrumCraft

all:Build
Build:
	g++ $(OBJS) -Wall -Werror -lSDL2 -lSDL2_image -o $(OBJ_NAME)