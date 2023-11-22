/*
* Author : 202037006 권도윤
* Class  : Problem Solving
* Date : 23. 10. 10
* File : 12.3.1.c
* Summary : Determines the number of days from the date 1/1/2000
*
*/
#include <stdio.h>

struct Date
    // structure Date
 {
    int month;
    int day;
    int year;
};

int Days(struct Date date) {
    // Days of MONTH and YEAR
    const int DAYS_IN_MONTH = 30;
    const int DAYS_IN_YEAR = 360;
    
    // Check if the input date values are within valid ranges
    if (date.month < 1 || date.month > 12 ||
        date.day < 1 || date.day > 30 ||
        date.year < 2000) {
        printf("Invalid date input.\n");
        return 0; // error
    }
    // Calculate the number of days from 1/1/2000 to the given date
    int days = 0;

    // Calculate Year
    days += (date.year - 2000) * DAYS_IN_YEAR;

    // Calculate Month
    days += (date.month - 1) * DAYS_IN_MONTH;

    // Add days of the current month
    days += date.day;

    return days;
}

int main() {
    struct Date inputDate;

    // Input value - DATE
    printf("Enter date as Month/Day/Year: ");
    scanf("%d %d %d", &inputDate.month, &inputDate.day, &inputDate.year);

    // Calculate and display
    int result = Days(inputDate);
    printf("Number of days: %d\n", result);

    return 0;
}
