#include <stdio.h>

void secs(int hours, int minutes, int seconds, int* totSecPtr) {
    *totSecPtr = hours * 3600 + minutes * 60 + seconds;
}

int main() {
    int hours, minutes, seconds;
    int totSec;
    int* totSecPtr = &totSec;

    // user enter the time in hours, minutes, and seconds
    printf("Enter the time in hours, minutes, and seconds: ");
    scanf("%d %d %d", &hours, &minutes, &seconds);

    // Call the secs() function and pass the address of totalSeconds using totalSecondsPtr
    secs(hours, minutes, seconds, totSecPtr);

    // Display the total number of seconds
    printf("Total number of seconds: %d\n", *totSecPtr);

    return 0;
}
