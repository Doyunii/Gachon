#include <stdio.h>
#include <string.h> 

// Employee structure
struct Employee {
    int idNumber;
    char name[50]; 
    float payRate;
    float hoursWorked;
    float grossPay;
};

int main() {
    // Declare an array of Employee structures
    struct Employee employees[6];

    // user to enter data for each employee
    for (int i = 0; i < 6; i++) {
        printf("Enter ID Number for Employee %d: ", i + 1);
        scanf("%d", &employees[i].idNumber);

        printf("Enter Name for Employee %d: ", i + 1);
        scanf("%s", employees[i].name); 

        printf("Enter Pay Rate for Employee %d: ", i + 1);
        scanf("%f", &employees[i].payRate);

        printf("Enter Hours Worked for Employee %d: ", i + 1);
        scanf("%f", &employees[i].hoursWorked);

        // Calculate the gross pay for each employee
        employees[i].grossPay = employees[i].payRate * employees[i].hoursWorked;
    }

    int maxNameLength = 0;
    for (int i = 0; i < 6; i++) {
        int nameLength = strlen(employees[i].name);
        if (nameLength > maxNameLength) {
            maxNameLength = nameLength;
        }
    }

    // Generate the payroll report
    printf("\nPayroll Report:\n");
    printf("ID Number\tName%*s\tGross Pay\n", maxNameLength - 4, ""); // Adjust alignment for "Name" column
    printf("--------------------------------------------\n");

    float totalGrossPay = 0.0; // Initialize total gross pay

    for (int i = 0; i < 6; i++) {
        printf("%d\t\t%s%*s\t%.2f\n", employees[i].idNumber, employees[i].name, (int)(maxNameLength - strlen(employees[i].name)), "", employees[i].grossPay);
        totalGrossPay += employees[i].grossPay; // Add employee's gross pay to the total
    }

    printf("\nTotal Gross Pay for All Employees: %.2f\n", totalGrossPay);

    return 0;
}
