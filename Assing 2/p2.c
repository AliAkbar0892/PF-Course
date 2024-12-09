#include <stdio.h>

void compressWord(char word[], char result[], int *removedCount) {
    int currentIndex = 0, resultIndex = 0;
    *removedCount = 0;
    while (word[currentIndex] != '\0') {
        if (currentIndex == 0 || word[currentIndex] != word[currentIndex - 1]) {
            result[resultIndex++] = word[currentIndex];
        } else {
            (*removedCount)++;
        }
        currentIndex++;
    }
    result[resultIndex] = '\0';
}

void compressWords(char words[][50], int wordCount, char results[][50], int *totalRemovedCount) {
    *totalRemovedCount = 0;
    for (int i = 0; i < wordCount; i++) {
        int removedCount = 0;
        compressWord(words[i], results[i], &removedCount);
        *totalRemovedCount += removedCount;
    }
}

int main() {
    char words[][50] = {"booooook", "coooool", "heeeey"};
    char results[3][50];
    int totalRemovedCount;

    compressWords(words, 3, results, &totalRemovedCount);

    for (int i = 0; i < 3; i++) {
        printf("Original: %s, Compressed: %s\n", words[i], results[i]);
    }

    printf("Total characters removed: %d\n", totalRemovedCount);

    return 0;
}
