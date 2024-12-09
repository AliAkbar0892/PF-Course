#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define ROWS 6
#define COLS 5

void populateArray(char array[ROWS][COLS], int studentIDLastFour) {
    srand(time(NULL));

    for (int i = 0; i < ROWS - 1; i++) {
        for (int j = 0; j < COLS; j++) {
            array[i][j] = 'A' + (rand() % 26);
        }
    }

    for (int j = 0; j < COLS - 1; j++) {
        array[ROWS - 1][j] = '0' + ((studentIDLastFour / (1000 / (10 * j))) % 10);
    }
    array[ROWS - 1][COLS - 1] = 'Q';
}

void printArray(char array[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%c ", array[i][j]);
        }
        printf("\n");
    }
}

int searchString(char array[ROWS][COLS], char *str) {
    int len = strlen(str);

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (j + len <= COLS) {
                int found = 1;
                for (int k = 0; k < len; k++) {
                    if (array[i][j + k] != str[k]) {
                        found = 0;
                        break;
                    }
                }
                if (found) return 1;
            }

            if (i + len <= ROWS) {
                int found = 1;
                for (int k = 0; k < len; k++) {
                    if (array[i + k][j] != str[k]) {
                        found = 0;
                        break;
                    }
                }
                if (found) return 1;
            }
        }
    }

    return 0;
}

int main() {
    char array[ROWS][COLS];
    int studentIDLastFour = 1234;
    int score = 0;
    char input[50];

    populateArray(array, studentIDLastFour);

    while (1) {
        printArray(array);
        printf("Enter a string to search (or END to stop): ");
        scanf("%s", input);

        if (strcmp(input, "END") == 0) {
            populateArray(array, studentIDLastFour);
            continue;
        }

        if (searchString(array, input)) {
            printf("%s is present. Score: %d\n", input, ++score);
        } else {
            printf("%s is not present. Score: %d\n", input, --score);
        }
    }

    return 0;
}
