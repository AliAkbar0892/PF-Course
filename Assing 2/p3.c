#include <stdio.h>

void compressWord(char word[], char result[], int *removed) {
    int index = 0, resultIndex = 0;
    *removed = 0;
    while (word[index] != '\0') {
        if (index == 0 || word[index] != word[index - 1]) {
            result[resultIndex++] = word[index];
        } else {
            (*removed)++;
        }
        index++;
    }
    result[resultIndex] = '\0';
}

void compressWords(char words[][50], int count, char results[][50], int *totalRemoved) {
    *totalRemoved = 0;
    for (int i = 0; i < count; i++) {
        int removed = 0;
        compressWord(words[i], results[i], &removed);
        *totalRemoved += removed;
    }
}

int main() {
    char words[][50] = {"booooook", "coooool", "heeeey"};
    char results[3][50];
    int totalRemoved;

    compressWords(words, 3, results, &totalRemoved);

    for (int i = 0; i < 3; i++) {
        printf("Original: %s, Compressed: %s\n", words[i], results[i]);
    }

    printf("Total characters removed: %d\n", totalRemoved);

    return 0;
}
