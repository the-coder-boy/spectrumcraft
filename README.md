# SpectrumCraft


## Compiling :- 
### Windows-
    - Put the lib folder, include folder inside the src folder
    - Put the `SDL2.dll` file from the bin folder in the main directory outside of src.
    - Edit the Makefile accordingly - 
    ```
    all:
	    g++ -Isrc/include -Lsrc/lib -o main main.cpp -lmingw32 -lSDL2main -lSDL2
    ```
    - Run using - `mingw32-make` OR `make`

### Linux-
    - Just install libsdl2-dev using `sudo apt-get install libsdl2-dev`
    - Edit the Makefile as it is given
