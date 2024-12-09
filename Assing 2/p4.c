#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void sortString(char str[]) {
    int length = strlen(str);
    for (int i = 0; i < length - 1; i++) {
        for (int j = i + 1; j < length; j++) {
            if (str[i] >= str[j]) { 
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}

int areAnagrams(char str1[], char str2[]) {
    char sortedStr1[50], sortedStr2[50];
    strcpy(sortedStr1, str1);
    strcpy(sortedStr2, str2);
    sortString(sortedStr1);
    sortString(sortedStr2);
    return strcmp(sortedStr1, sortedStr2) == 0;
}

void groupAnagrams(char transactions[][50], int count) {
    int visited[count];
    for (int i = 0; i < count; i++) {
        visited[i] = 0;
    }

    for (int i = 0; i < count; i++) {
        if (!visited[i]) {
            printf("[");
            printf("%s", transactions[i]);
            visited[i] = 1;

            for (int j = i + 1; j < count; j++) {
                if (!visited[j] && areAnagrams(transactions[i], transactions[j])) {
                    printf(", %s", transactions[j]);
                    visited[j] = 1;
                }
            }
            printf("]\n");
        }
    }
}

int main() {
    char transactions[][50] = {"eat", "tea", "tan", "ate", "nat", "bat"};
    int count = 6;

    groupAnagrams(transactions, count);

    return 0;
}
