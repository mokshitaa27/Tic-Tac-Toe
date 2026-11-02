# Tic-Tac-Toe Game in C

A simple console-based Tic-Tac-Toe game developed using the C programming language. The player competes against the computer in a classic 3×3 Tic-Tac-Toe game.

## Features

- Player vs Computer gameplay
- Computer generates random moves
- Interactive 3×3 game board
- Automatic win, loss, and draw detection
- Input validation to prevent invalid moves
- Option to play multiple rounds
- Simple menu-free terminal interface

## Technologies Used

- **Language:** C
- **IDE:** Visual Studio Code
- **Compiler:** GCC / Clang
- **Libraries:** stdio.h, stdlib.h, time.h

## How to Run

**Step 1:** Download or clone the repository.

**Step 2:** Open the project folder in VS Code.

**Step 3:** Open the terminal and compile the program.

For Windows:

```bash
gcc tictactoe.c -o tictactoe.exe
```

Run the game:

```bash
.\tictactoe.exe
```

For macOS/Linux:

```bash
gcc tictactoe.c -o tictactoe
./tictactoe
```

## How to Play

1. The player uses `X` and the computer uses `O`.
2. The board contains positions numbered from 1 to 9.
3. Enter a number to place your `X` in that position.
4. The computer automatically makes its move.
5. The first player to complete three symbols horizontally, vertically, or diagonally wins.
6. If all positions are filled without a winner, the game ends in a draw.

## Game Board

```text
 1 | 2 | 3
---|---|---
 4 | 5 | 6
---|---|---
 7 | 8 | 9
```

## Concepts Used

- Arrays and two-dimensional arrays
- Functions
- Loops and conditional statements
- Random number generation
- User input handling
- Basic game logic

## Future Improvements

- Difficulty levels (Easy, Medium, Hard)
- Unbeatable AI using the Minimax algorithm
- Score tracking
- Improved terminal interface

## Author

**Mokshita Kansal**

First-Year Engineering Student

## Project Purpose

This project was developed to practice C programming fundamentals and understand how arrays, functions, loops, and conditional statements can be used to create an interactive game.
