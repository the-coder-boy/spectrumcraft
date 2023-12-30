#include <iostream>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_mixer.h>
#include "headers/SpectrumFiles.hpp"

SpectrumFiles::SpectrumFiles()
{
    std::cout << "Can take files...\n";
}

void SpectrumFiles::TakingMusics(char *files)
{
    std::cout << files << std::endl;
}
