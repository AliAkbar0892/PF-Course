#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define GRID_SIZE 5

void displayGrid(char grid[GRID_SIZE][GRID_SIZE]) {
    printf("\nCurrent Grid:\n");
    for (int i = 0; i < GRID_SIZE; i++) {
        for (int j = 0; j < GRID_SIZE; j++) {
            printf("%c ", grid[i][j]);
        }
        printf("\n");
    }
}

void movePlayer(char grid[GRID_SIZE][GRID_SIZE], int *playerRow, int *playerCol, char direction, int *itemsCollected) {
    int newRow = *playerRow;
    int newCol = *playerCol;

    if (direction == 'W') newRow--;
    else if (direction == 'S') newRow++;
    else if (direction == 'A') newCol--;
    else if (direction == 'D') newCol++;

    if (newRow < 0 || newRow >= GRID_SIZE || newCol < 0 || newCol >= GRID_SIZE) {
        printf("Invalid move: Out of bounds!\n");
        return;
    }

    if (grid[newRow][newCol] == 'X') {
        printf("Invalid move: Obstacle in the way!\n");
        return;
    }

    if (grid[newRow][newCol] == 'I') {
        (*itemsCollected)++;
        printf("Item collected! Total items: %d\n", *itemsCollected);
    }

    grid[*playerRow][*playerCol] = ' ';
    *playerRow = newRow;
    *playerCol = newCol;
    grid[*playerRow][*playerCol] = 'P';
}

int main() {
    char grid[GRID_SIZE][GRID_SIZE] = {
        {' ', ' ', 'I', 'X', ' '},
        {' ', 'X', ' ', ' ', ' '},
        {'I', ' ', 'X', 'X', ' '},
        {' ', ' ', ' ', 'I', 'X'},
        {' ', 'X', ' ', ' ', 'P'}
    };

    int playerRow = 4, playerCol = 4;
    int itemsCollected = 0;
    char input;

    printf("Welcome to the Grid Adventure Game!\n");

    while (1) {
        displayGrid(grid);
        printf("\nEnter move (W: up, S: down, A: left, D: right, Q: quit): ");
        scanf(" %c", &input);
        input = toupper(input);

        if (input == 'Q') {
            printf("Thanks for playing! Total items collected: %d\n", itemsCollected);
            break;
        }

        if (input == 'W' || input == 'S' || input == 'A' || input == 'D') {
            movePlayer(grid, &playerRow, &playerCol, input, &itemsCollected);
        } else {
            printf("Invalid input! Please enter W, S, A, D, or Q.\n");
        }
    }

    return 0;
}
