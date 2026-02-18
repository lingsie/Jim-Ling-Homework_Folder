# SnakeGame — Text-Based Terminal Game Framework (Project 1 Part A)


A simple C++ terminal (text-based) game framework using a classic Snake game as the demo implementation.


This project focuses on:
- clean project structure (`include/` + `src/` + `assets/`)
- a basic game loop (input → update → render → timing)
- simple persistence (continue save + high score)


---


## Build & Run


### Requirements
- C++17 compatible compiler (`g++` recommended)
- `make`


### Build
make




### Run
./snakegame


### Clean
make clean




### Controls
In-Game (Snake)
- Move: Arrow Keys or W A S D
- Pause / Resume: P
- Return to Menu: Esc


Menus
- Navigate: Arrow Up/Down or W / S
- Select / Confirm: Enter
- Back: Esc



### Save / Continue
Save data is stored under:
- assets/save.txt


The game stores:
1. Continue Save (last unfinished run snapshot)
2. High Score (best score across runs)


Behavior
- If an unfinished save exists, the main menu will show Continue.
- Choosing Continue restores the last saved game state.
- When a run ends, the game updates:
- high score (if the score is higher)
- unfinished save (if designed to keep last state) or clears it (optional)


### Project Structure
snakegame/
  assets/
    save.txt
  include/
    map.h
    game.h            (recommended)
    snake.h           (recommended)
  src/
    main.cpp
    game.cpp          (recommended)
    snake.cpp         (optional)
    map.cpp           (optional)
  Makefile

