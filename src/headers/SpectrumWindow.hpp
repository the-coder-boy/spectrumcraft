#include <iostream>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_mixer.h>

class SpectrumWindow
{
private:
    const int SCREEN_WIDTH = 640;
    const int SCREEN_HEIGHT = 500;
    const char *TITLE = "SpectrumCraft";
    SDL_Window *window = NULL;
    SDL_Surface *windowSurface = NULL;
    char *DroppedMusic;
    SDL_Event Events;

public:
    SpectrumWindow();
};
