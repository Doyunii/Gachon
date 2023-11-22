#include <stdio.h>
/*
*
* Author : 202037006   권도윤
* File : Exercise12.1.1a.c
* Class : Problem Solving
* Date : 2023.09.29
* 
*
*
*

*/
// Define a structure to store date
struct Date {
    int month;
    int day;
    int year;
};

int main() {
    struct Date curDate;

    // user for input
    printf("Enter the current month, day, and year (mm dd yyyy): ");
    scanf("%d %d %d", &curDate.month, &curDate.day, &curDate.year);

    // Display the date
    printf("Current Date: %02d/%02d/%04d\n", curDate.month, curDate.day, curDate.year);

    return 0;
}