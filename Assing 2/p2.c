#include <stdio.h>

void analyzeFrequency(char slogan[]) {
    int frequency[256] = {0};

    for (int i = 0; slogan[i] != '\0'; i++) {
        frequency[(int)slogan[i]]++;
    }

    printf("{ ");
    for (int i = 0; i < 256; i++) {
        if (frequency[i] > 0) {
            printf("'%c': %d, ", i, frequency[i]);
        }
    }
    printf("}\n");
}

int main() {
    char slogans[][50] = {"buy now", "save big", "limited offer"};
    int numberOfSlogans = 3;

    for (int i = 0; i < numberOfSlogans; i++) {
        printf("For \"%s\": ", slogans[i]);
        analyzeFrequency(slogans[i]);
    }

    return 0;
}
