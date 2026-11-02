
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char board[3][3];

// Initialize board
void initializeBoard() {
    char num = '1';

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = num++;
        }
    }
}

// Display board
void displayBoard() {
    printf("\n");
    for (int i = 0; i < 3; i++) {
        printf(" %c | %c | %c \n",
               board[i][0], board[i][1], board[i][2]);

        if (i < 2)
            printf("---|---|---\n");
    }
    printf("\n");
}

// Check winner
char checkWinner() {
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] &&
            board[i][1] == board[i][2])
            return board[i][0];

        if (board[0][i] == board[1][i] &&
            board[1][i] == board[2][i])
            return board[0][i];
    }

    if (board[0][0] == board[1][1] &&
        board[1][1] == board[2][2])
        return board[0][0];

    if (board[0][2] == board[1][1] &&
        board[1][1] == board[2][0])
        return board[0][2];

    return ' ';
}

// Check for draw
int isDraw() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] != 'X' &&
                board[i][j] != 'O')
                return 0;
        }
    }
    return 1;
}

// Player move
void playerMove() {
    int choice, row, col;

    while (1) {
        printf("Enter your move (1-9): ");

        if (scanf("%d", &choice) != 1) {
            printf("Please enter a number!\n");

            int ch;
            while ((ch = getchar()) != '\n' && ch != EOF);
            continue;
        }

        if (choice < 1 || choice > 9) {
            printf("Invalid position! Try again.\n");
            continue;
        }

        row = (choice - 1) / 3;
        col = (choice - 1) % 3;

        if (board[row][col] == 'X' ||
            board[row][col] == 'O') {
            printf("Position already taken!\n");
        } else {
            board[row][col] = 'X';
            break;
        }
    }
}

// Computer move
void computerMove() {
    int choice, row, col;

    printf("Computer is playing...\n");

    do {
        choice = rand() % 9;
        row = choice / 3;
        col = choice % 3;
    } while (board[row][col] == 'X' ||
             board[row][col] == 'O');

    board[row][col] = 'O';

    printf("Computer chose position %d\n", choice + 1);
}

int main() {
    char winner;
    char playAgain;

    srand((unsigned int)time(NULL));

    printf("================================\n");
    printf("       TIC TAC TOE GAME         \n");
    printf("       PLAYER VS COMPUTER       \n");
    printf("================================\n");

    do {
        initializeBoard();

        printf("\nYou are X | Computer is O\n");

        while (1) {
            displayBoard();

            playerMove();

            winner = checkWinner();

            if (winner != ' ' || isDraw())
                break;

            computerMove();

            winner = checkWinner();

            if (winner != ' ' || isDraw())
                break;
        }

        displayBoard();

        if (winner == 'X')
            printf("Congratulations! You Win!\n");
        else if (winner == 'O')
            printf("Computer Wins! Better luck next time.\n");
        else
            printf("It's a Draw!\n");

        printf("\nPlay again? (y/n): ");
        scanf(" %c", &playAgain);

    } while (playAgain == 'y' || playAgain == 'Y');

    printf("\nThanks for playing!\n");

    return 0;
}
