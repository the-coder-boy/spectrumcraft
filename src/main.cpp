#include <iostream>
#include <SDL2/SDL.h>

const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

int main(int, char**){    
    std::cout << "hello\n";
    SDL_Window* window = NULL;

    if(SDL_Init(SDL_INIT_VIDEO) < 0) {
        std::cout << "video cannot be initialized" << SDL_GetError() << "\n";
    }
    else {
        window = SDL_CreateWindow("Spectrumcraft", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
                              SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);

        if (window == NULL) {
            std::cout<< "Window cannot be created" << SDL_GetError() << "\n";
        }
        else {
            SDL_UpdateWindowSurface(window);
            SDL_Delay(2000);
        }
    }

    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}
