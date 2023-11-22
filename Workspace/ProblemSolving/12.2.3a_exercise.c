/*
*
* File : 12.2.3a_exercise.c
* Author :202037006 권도윤
* Class : Problem Solving
* Date : 23. 10. 10
* Summary : structure type of idnumber, last name(20char), floating-point pay rate, floating-point hours worked.
*
*
*/
#include <stdio.h>

struct EmployeeRecord {
    int idNumber;
    char lastName[21]; // 20 characters + a null terminator
    float payRate;
    float hoursWorked;
};

int main() {
    struct EmployeeRecord employee;

    // Get input from the user
    printf("Enter Employee ID: ");
    scanf("%d", &employee.idNumber);

    printf("Enter Last Name (up to 20 characters): ");
    scanf("%20s", employee.lastName);

    printf("Enter Pay Rate: ");
    scanf("%f", &employee.payRate);

    printf("Enter Hours Worked: ");
    scanf("%f", &employee.hoursWorked);

    // Display the employee record
    printf("\nEmployee Record:\n");
    printf("Employee ID: %d\n", employee.idNumber);
    printf("Last Name: %s\n", employee.lastName);
    printf("Pay Rate: %.2f\n", employee.payRate);
    printf("Hours Worked: %.2f\n", employee.hoursWorked);

    return 0;
}

