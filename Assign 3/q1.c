#include <stdio.h>
#include <string.h>

struct Employee {
    int employeeCode;
    char employeeName[50];
    char dateOfJoining[15];
};

void assignValues(struct Employee *e) {
    printf("Enter employee code: ");
    scanf("%d", &e->employeeCode);
    printf("Enter employee name: ");
    scanf(" %[^\n]s", e->employeeName);
    printf("Enter date of joining (DD/MM/YYYY): ");
    scanf("%s", e->dateOfJoining);
}

int calculateTenure(char dateOfJoining[]) {
    int day, month, year;
    int currentDay = 7, currentMonth = 12, currentYear = 2024;  // Assume current date as 07/12/2024

    sscanf(dateOfJoining, "%d/%d/%d", &day, &month, &year);
    int tenureInYears = currentYear - year;

    if (currentMonth < month || (currentMonth == month && currentDay < day)) {
        tenureInYears--;
    }

    return tenureInYears;
}

int main() {
    struct Employee employees[4];
    int count = 0;

    for (int i = 0; i < 4; i++) {
        printf("Enter details for employee %d:\n", i + 1);
        assignValues(&employees[i]);
    }

    printf("\nEmployees with tenure of more than three years:\n");
    for (int i = 0; i < 4; i++) {
        int tenure = calculateTenure(employees[i].dateOfJoining);
        if (tenure > 3) {
            printf("Employee Code: %d\n", employees[i].employeeCode);
            printf("Employee Name: %s\n", employees[i].employeeName);
            printf("Date of Joining: %s\n", employees[i].dateOfJoining);
            printf("Tenure: %d years\n\n", tenure);
            count++;
        }
    }

    printf("Total number of employees with more than 3 years of tenure: %d\n", count);

    return 0;
}
