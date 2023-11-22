/*
* Author : 202037006 권도윤
* Class  : Problem Solving
* Date : 23. 10. 10
* File : 12.3.1.c
* Summary : Determines the number of days from the date 1/1/2000
*
*/
#include <stdio.h>

struct Date {
    int month;
    int day;
    int year;
};

void Days(const struct Date *date, int *result) {
    // Constants for days in a month and days in a year
    const int DAYS_IN_MONTH = 30;
    const int DAYS_IN_YEAR = 360;

    // Calculate the number of days from 1/1/2000 to the given date
    int days = 0;

    // Calculate days from full years
    days += (date->year - 2000) * DAYS_IN_YEAR;

    // Calculate days from full months
    days += (date->month - 1) * DAYS_IN_MONTH;

    // Add days of the current month
    days += date->day;

    // Store the result in the output parameter
    *result = days;
}

int main() {
    struct Date inputDate;

    // Prompt the user for the date
    printf("Enter date as Month/Date/Year: ");
    scanf("%d %d %d", &inputDate.month, &inputDate.day, &inputDate.year);

    int result;
    // Calculate and store in result
    Days(&inputDate, &result);

    // Display
    printf("Number of days: %d\n", result);

    return 0;
}
