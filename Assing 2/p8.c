#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int BinaryToDecimal(int number) {
    int decimal = 0, base = 2, remainder; 
    while (number > 0) {
        remainder = number % 10;
        decimal += remainder * base;
        base *= 2;
        number /= 10;
    }
    return decimal;
}

int DecimalToBinary(int number) {
    int binary = 0, base = 1, remainder;
    while (number > 0) {
        remainder = number % 2;
        binary += remainder * base;
        base *= 10;
        number /= 2;
    }
    return binary;
}

void DecimalToHexadecimal(int number) {
    char hexadecimal[32];
    int index = 0;
    while (number > 0) {
        int remainder = number % 16;
        hexadecimal[index++] = (remainder < 10) ? (remainder + '0') : (remainder - 10 + 'A');
        number /= 16;
    }
    printf("Hexadecimal: ");
    for (int i = index - 1; i >= 0; i--) {
        printf("%c", hexadecimal[i]);
    }
    printf("\n");
}

void HexadecimalToDecimal(char hexNumber[]) {
    int decimal = 0, base = 1;
    int length = strlen(hexNumber);
    for (int i = length - 1; i >= 0; i--) {
        if (hexNumber[i] >= '0' && hexNumber[i] <= '9') {
            decimal += (hexNumber[i] - '0') * base;
        } else if (hexNumber[i] >= 'A' && hexNumber[i] <= 'F') {
            decimal += (hexNumber[i] - 'A' + 10) * base;
        } else if (hexNumber[i] >= 'a' && hexNumber[i] <= 'f') {
            decimal += (hexNumber[i] - 'a' + 10) * base;
        } else {
            printf("Invalid hexadecimal number.\n");
            return;
        }
        base *= 16;
    }
    printf("Decimal: %d\n", decimal);
}

void BinaryToHexadecimal(int number) {
    int decimal = BinaryToDecimal(number);
    DecimalToHexadecimal(decimal);
}

void HexadecimalToBinary(char hexNumber[]) {
    int decimal = 0, base = 1;
    int length = strlen(hexNumber);
    for (int i = length - 1; i >= 0; i--) {
        if (hexNumber[i] >= '0' && hexNumber[i] <= '9') {
            decimal += (hexNumber[i] - '0') * base;
        } else if (hexNumber[i] >= 'A' && hexNumber[i] <= 'F') {
            decimal += (hexNumber[i] - 'A' + 10) * base;
        } else if (hexNumber[i] >= 'a' && hexNumber[i] <= 'f') {
            decimal += (hexNumber[i] - 'a' + 10) * base;
        } else {
            printf("Invalid hexadecimal number.\n");
            return;
        }
        base *= 16;
    }
    int binary = DecimalToBinary(decimal);
    printf("Binary: %d\n", binary);
}

int main() {
    int choice, number;
    char hexNumber[32];

    while (1) {
        printf("\nMenu:\n");
        printf("1. Binary to Decimal\n");
        printf("2. Decimal to Binary\n");
        printf("3. Decimal to Hexadecimal\n");
        printf("4. Hexadecimal to Decimal\n");
        printf("5. Binary to Hexadecimal\n");
        printf("6. Hexadecimal to Binary\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter binary number: ");
                scanf("%d", &number);
                printf("Decimal: %d\n", BinaryToDecimal(number));
                break;

            case 2:
                printf("Enter decimal number: ");
                scanf("%d", &number);
                printf("Binary: %d\n", DecimalToBinary(number));
                break;

            case 3:
                printf("Enter decimal number: ");
                scanf("%d", &number);
                DecimalToHexadecimal(number);
                break;

            case 4:
                printf("Enter hexadecimal number: ");
                scanf("%s", hexNumber);
                HexadecimalToDecimal(hexNumber);
                break;

            case 5:
                printf("Enter binary number: ");
                scanf("%d", &number);
                BinaryToHexadecimal(number);
                break;

            case 6:
                printf("Enter hexadecimal number: ");
                scanf("%s", hexNumber);
                HexadecimalToBinary(hexNumber);
                break;

            case 7:
                exit(0);

            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
