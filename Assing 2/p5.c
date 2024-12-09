#include <stdio.h>

void horizontalHistogram(int values[], int count) {
    for (int i = 0; i < count; i++) {
        printf("Value %d: ", i + 1);
        for (int j = 0; j < values[i]; j++) {
            printf("*");
        }
        printf("\n");
    }
}

void verticalHistogram(int values[], int count) {
    int max = 0;
    for (int i = 0; i < count; i++) {
        if (values[i] > max) {
            max = values[i];
        }
    }

    for (int i = max; i > 0; i--) {
        for (int j = 0; j < count; j++) {
            if (values[j] >= i) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    for (int i = 0; i < count; i++) {
        printf("%d ", values[i]);
    }
    printf("\n");
}

int main() {
    int values[] = {3, 5, 1, 4};
    int count = 4;

    printf("Horizontal Histogram\n");
    horizontalHistogram(values, count);

    printf("\nVertical Histogram\n");
    verticalHistogram(values, count);

    return 0;
}
