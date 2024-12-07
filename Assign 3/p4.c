#include <stdio.h>
#include <stdlib.h>

void inputEmployees(int** ratings, int numEmployees, int numPeriods) {
    for (int i = 0; i < numEmployees; i++) {
        for (int j = 0; j < numPeriods; j++) {
            int rating;
            while (1) {
                printf("Enter rating for employee %d, period %d (1-10): ", i + 1, j + 1);
                scanf("%d", &rating);
                if (rating >= 1 && rating <= 10) {
                    ratings[i][j] = rating;
                    break;
                } else {
                    printf("Invalid rating! Please enter a value between 1 and 10.\n");
                }
            }
        }
    }
}

void displayPerformance(int** ratings, int numEmployees, int numPeriods) {
    for (int i = 0; i < numEmployees; i++) {
        printf("Employee %d Performance: ", i + 1);
        for (int j = 0; j < numPeriods; j++) {
            printf("%d ", ratings[i][j]);
        }
        printf("\n");
    }
}

int findEmployeeOfTheYear(int** ratings, int numEmployees, int numPeriods) {
    int bestEmployee = -1;
    float highestAverage = -1.0;

    for (int i = 0; i < numEmployees; i++) {
        int totalScore = 0;
        for (int j = 0; j < numPeriods; j++) {
            totalScore += ratings[i][j];
        }
        float averageScore = totalScore / (float)numPeriods;
        if (averageScore > highestAverage) {
            highestAverage = averageScore;
            bestEmployee = i;
        }
    }

    return bestEmployee;
}

int findHighestRatedPeriod(int** ratings, int numEmployees, int numPeriods) {
    int bestPeriod = -1;
    float highestAverage = -1.0;

    for (int j = 0; j < numPeriods; j++) {
        int totalScore = 0;
        for (int i = 0; i < numEmployees; i++) {
            totalScore += ratings[i][j];
        }
        float averageScore = totalScore / (float)numEmployees;
        if (averageScore > highestAverage) {
            highestAverage = averageScore;
            bestPeriod = j;
        }
    }

    return bestPeriod;
}

int findWorstPerformingEmployee(int** ratings, int numEmployees, int numPeriods) {
    int worstEmployee = -1;
    float lowestAverage = 11.0;

    for (int i = 0; i < numEmployees; i++) {
        int totalScore = 0;
        for (int j = 0; j < numPeriods; j++) {
            totalScore += ratings[i][j];
        }
        float averageScore = totalScore / (float)numPeriods;
        if (averageScore < lowestAverage) {
            lowestAverage = averageScore;
            worstEmployee = i;
        }
    }

    return worstEmployee;
}

int main() {
    int numEmployees, numPeriods;

    printf("Enter number of employees: ");
    scanf("%d", &numEmployees);
    printf("Enter number of evaluation periods: ");
    scanf("%d", &numPeriods);

    int** ratings = (int**)malloc(numEmployees * sizeof(int*));
    for (int i = 0; i < numEmployees; i++) {
        ratings[i] = (int*)malloc(numPeriods * sizeof(int));
    }

    inputEmployees(ratings, numEmployees, numPeriods);

    displayPerformance(ratings, numEmployees, numPeriods);

    int employeeOfTheYear = findEmployeeOfTheYear(ratings, numEmployees, numPeriods);
    printf("Employee of the Year: Employee %d\n", employeeOfTheYear + 1);

    int highestRatedPeriod = findHighestRatedPeriod(ratings, numEmployees, numPeriods);
    printf("Highest Rated Period: Period %d\n", highestRatedPeriod + 1);

    int worstPerformingEmployee = findWorstPerformingEmployee(ratings, numEmployees, numPeriods);
    printf("Worst Performing Employee: Employee %d\n", worstPerformingEmployee + 1);

    for (int i = 0; i < numEmployees; i++) {
        free(ratings[i]);
    }
    free(ratings);

    return 0;
}
