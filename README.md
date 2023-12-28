# SpectrumCraft


## Compiling :- 
### Windows-
    - Put the lib folder, include folder inside the src folder
    - Put the `SDL2.dll` file from the bin folder in the main directory outside of src.
    - Edit the Makefile accordingly - 

        ```shell
        all:
            g++ -Isrc/include -Lsrc/lib -o main main.cpp -lmingw32 -lSDL2main -lSDL2
        ```

    - Run using - 
    

    ```shell
    mingw32-make
    ```

    OR

    ```shell
    make
    ```


### Linux-
    - Just install the libsdl2-dev library - 

    ```shell
    sudo apt-get install libsdl2-dev
    ```

    - Keep the Makefile same