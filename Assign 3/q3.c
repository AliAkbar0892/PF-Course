#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int validateEmail(char* email) {
    int atCount = 0;
    int dotAfterAt = 0;
    int length = strlen(email);

    if (length == 0) {
        return 0;  // Empty email is invalid
    }

    for (int i = 0; i < length; i++) {
        if (email[i] == '@') {
            atCount++;
        }
        if (email[i] == '.') {
            dotAfterAt = 1;
        }
    }

    if (atCount == 1 && dotAfterAt) {
        return 1;  // Valid email
    }
    return 0;  // Invalid email
}

int main() {
    char* email = NULL;
    size_t size = 0;

    printf("Enter email address: ");
    getline(&email, &size, stdin);

    // Remove newline character if present
    size_t len = strlen(email);
    if (email[len - 1] == '\n') {
        email[len - 1] = '\0';
    }

    if (validateEmail(email)) {
        printf("Valid Email\n");
    } else {
        printf("Invalid Email\n");
    }

    free(email);

    return 0;
}
