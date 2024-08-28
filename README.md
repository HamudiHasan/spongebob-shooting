# SpongeBob Shooter Game

## Introduction

**SpongeBob Shooter Game** is a simple 2D game developed in C using the iGraphics library. The game was created as a project during my second trimester as a student. In this game, the player needs to shoot SpongeBob characters that appear on the screen. The objective is to terminate all the "good" SpongeBobs before running out of lives.

## Gameplay

- **Objective**: Shoot all the "good" SpongeBob characters to progress through levels.
- **Controls**:
  - **Mouse**: Click on the SpongeBob characters to shoot them.
  - **Keyboard**: 
    - Press **P** to pause the game.
    - Press **R** to resume the game.
    - Press **END** to exit the game.

## Features

- Simple mouse-click shooting mechanics.
- Two levels with increasing difficulty.
- Randomized positions for targets to increase challenge.
- Score tracking and level progression.

## Code Structure

The game is structured using several functions that manage the game's logic, rendering, and user input:

- **`iDraw()`**: The main drawing function called repeatedly by the system. It handles rendering the game screen, including backgrounds, targets, and game instructions.
- **`iMouseMove(int mx, int my)`**: This function tracks mouse movements.
- **`iMouse(int button, int state, int mx, int my)`**: Handles mouse click events to determine if the player clicked on a target and updates the game state accordingly.
- **`iKeyboard(unsigned char key)`**: Handles keyboard inputs for pausing, resuming, and exiting the game.
- **`iSpecialKeyboard(unsigned char key)`**: Manages special keyboard inputs, such as the END key to exit the game.
- **`ballchange()`**: Updates the positions of the targets and handles their movement.

### Important Variables

- **`play`, `help`, `back`**: Control the game state and menus.
- **`score`, `van`, `van1`, `van2`, `van3`**: Track scores and target states for each level.
- **`ballX`, `ballY`, `ballX1`, `ballY1`, `ballX2`, `ballY2`, `ballX3`, `ballY3`**: Coordinates for the targets on the screen.
- **`dy`, `sx`**: Variables used to control the movement of targets.

### Assets

The game uses several bitmap images (.bmp) for backgrounds and characters. 

This project was developed as part of a learning exercise to understand basic game development and graphics programming in C.

## Authors

- [Hamudi Hasan Sonet](https://github.com/HamudiHasan)
- Fairooz Maliha Rahman
- Supta Bhowmick	



### License
Feel free to use this code for educational purposes.




