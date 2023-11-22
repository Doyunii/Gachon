/*
* Author : 202037006 권도윤
* Class  : Problem Solving
* Date : 23. 10. 10
* File : 12.3.1.c
* Summary : returns the later date of any two dates (returned by recent())
*
*/
#include <stdio.h>

struct Date {
    int month;
    int day;
    int year;
};

// Function (compare two dates and return the later date)
struct Date recent(struct Date date1, struct Date date2) {
    if (date1.year > date2.year) {
        return date1; // date1 is later
    } else if (date1.year < date2.year) {
        return date2; // date2 is later
    }

    // If years are the same, check the months
    if (date1.month > date2.month) {
        return date1; // date1 is later
    } else if (date1.month < date2.month) {
        return date2; // date2 is later
    }

    // If months are the same, check the days
    if (date1.day > date2.day) {
        return date1; // date1 is later
    } else {
        return date2; // date2 is later or they are the same
    }
}

int main() {
    struct Date date1, date2, laterDate;

    // Input value #1 date
    printf("Enter date 1 (month day year): ");
    scanf("%d %d %d", &date1.month, &date1.day, &date1.year);
    // Input value #2 date
    printf("Enter date 2 (month day year): ");
    scanf("%d %d %d", &date2.month, &date2.day, &date2.year);

    // Find the later date using the recent() function and store 
    laterDate = recent(date1, date2);

    // Display the member values of the later date
    printf("The later date is: %d/%d/%d\n", laterDate.month, laterDate.day, laterDate.year);

    return 0;
}
