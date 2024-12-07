#include <stdio.h>
int main() {
    int arr[5];
    printf("Enter 5 values in the array. NOTE THAT VALUES SHOULD BE LESS THAN 9999:\n");
    int i;
    for (i = 0; i < 5; i++) {
        do {
            printf("Enter value for index %d: ", i);
            scanf("%d", &arr[i]);
            if (arr[i] >= 9999) {
                printf("Value should be less than 9999. Please enter again.\n");
            }
        } while (arr[i] >= 9999); 
    }
    int smal = arr[0]; 
    for (i = 1; i < 5; i++) { 
        if (arr[i] < smal) {  
            smal = arr[i];    
        }
    }
    printf("The smallest value in the array is: %d\n", smal);
    int smal2 = arr[0]; 
    for (i = 1; i < 5; i++) { 
        if (arr[i] < smal2 && arr[i]!=smal) {  
            smal2 = arr[i];    
        }
    }
    printf("The second smallest value in the array is: %d\n", smal2);
}
