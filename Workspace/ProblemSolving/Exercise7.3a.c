#include <stdio.h>

int secs(int hours, int minutes, int seconds) {
    int totalSeconds;

    totalSeconds = hours * 3600 + minutes * 60 + seconds;
    
    return totalSeconds;
}

int main() {
    int hours, minutes, seconds;
    int totalSeconds;

    // user enter the time in hours, minutes, and seconds
    printf("Enter the time in hours, minutes, and seconds: ");
    scanf("%d %d %d", &hours, &minutes, &seconds);

    // Call the secs() function and store the result in totalSeconds variable
    totalSeconds = secs(hours, minutes, seconds);

    // Display the total number of seconds
    printf("Total number of seconds: %d\n", totalSeconds);

    return 0;
}
