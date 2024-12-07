#include <stdio.h>

/* 
Pattern Description:
- The program prints a symmetric star pattern based on an odd value of N.
- The pattern consists of stars forming a cross-like structure.
- The size of the pattern is determined by the odd integer N, where N represents the height and width of the pattern.
- The center of the pattern is located at (N/2, N/2) and all the stars are symmetrically arranged with respect to this center.
- The pattern consists of stars at the intersections of horizontal, vertical, and diagonal lines passing through the center.

Steps:
1. The user is prompted to input an odd integer N.
2. The program checks the value of N and ensures it's odd.
3. The program generates a grid of size N x N and prints stars at appropriate positions to form the required pattern.
*/

int main() {
    int N;
    printf("Enter an odd value for N: ");
    scanf("%d", &N);

    // Check if the input is odd
    if (N % 2 == 0) {
        printf("Please enter an odd number.\n");
        return 1; // Exit if the input is not odd
    }

    // Loop to print the pattern
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            // Check if the position should contain a star
            if (i == N / 2 || j == N / 2 || i == j || i + j == N - 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
