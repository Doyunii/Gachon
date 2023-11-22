/*
* Author : 202037006 권도윤
* Class  : Problem Solving
* Date : 23. 10. 10
* File : 12.3.1.c
* Summary : returns later date of two dates
*
*/
#include <stdio.h>

struct Date {
    int month;
    int day;
    int year;
};

// Function to compare two dates and return the later date
struct Date recent(struct Date date1, struct Date date2) {
    // Check the years first
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
    struct Date date1, date2;

    // Prompt the user for two dates
    printf("Enter date 1 (month day year): ");
    scanf("%d %d %d", &date1.month, &date1.day, &date1.year);

    printf("Enter date 2 (month day year): ");
    scanf("%d %d %d", &date2.month, &date2.day, &date2.year);

    // Find the later date using the recent() function
    struct Date laterDate = recent(date1, date2);

    // Display the later date
    printf("The later date is: %d/%d/%d\n", laterDate.month, laterDate.day, laterDate.year);

    return 0;
}
