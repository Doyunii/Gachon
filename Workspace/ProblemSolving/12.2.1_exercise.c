/*
*
* File : 12.2.1_exercise.c
* Author :202037006 권도윤
* Class : Problem Solving
* Date : 23. 10. 10
* Summary : structure of MONTH and DAYS
*
*
*/
#include <stdio.h>
#include <string.h> // 추가: 문자열 길이를 얻기 위한 헤더

// MonthDays structure
struct MONTH_DAYS {
    char name[10];
    int days;
};

int main() {
    // MonthDays struct
    struct MONTH_DAYS convert[12] = {
        {"January", 31},
        {"February", 28},
        {"March", 31},
        {"April", 30},
        {"May", 31},
        {"June", 30},
        {"July", 31},
        {"August", 31},
        {"September", 30},
        {"October", 31},
        {"November", 30},
        {"December", 31}
    };

    // Find the maximum length of month names
    int maxNameLength = 0;
    for (int i = 0; i < 12; i++) {
        int nameLength = strlen(convert[i].name);
        if (nameLength > maxNameLength) {
            maxNameLength = nameLength;
        }
    }

    // Display the name and number of days for each month with uniform alignment
    printf("Month%*s\tDays\n", maxNameLength - 4, ""); // Adjust alignment for "Month" column
    printf("--------------------\n");
    
    for (int i = 0; i < 12; i++) {
        printf("%s%*s\t%d\n", convert[i].name, (int)(maxNameLength - strlen(convert[i].name)), "", convert[i].days);
    }

    return 0;
}
