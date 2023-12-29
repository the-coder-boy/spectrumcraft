#include <iostream>
#include <SDL2/SDL.h>
#include "headers/SpectrumWindow.hpp"
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_mixer.h>

SpectrumWindow::SpectrumWindow()
{
    if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO) < 0)
    {
        std::cout << "video cannot be initialized" << SDL_GetError() << "\n";
    }
    else
    {
        window = SDL_CreateWindow(TITLE, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
                                  SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);

        if (window == NULL)
        {
            std::cout << "Window cannot be created" << SDL_GetError() << "\n";
        }
        else
        {
            windowSurface = SDL_GetWindowSurface(window);
            bool spectrumCraftRun = true;
            SDL_Event ev;
            while (spectrumCraftRun)
            {
                while (SDL_PollEvent(&ev) != 0)
                {
                    if (ev.type == SDL_QUIT)
                    {
                        spectrumCraftRun = false;
                    }
                }

                SDL_UpdateWindowSurface(window);
            }
        }
    }

    SDL_DestroyWindow(window);
    SDL_Quit();
}