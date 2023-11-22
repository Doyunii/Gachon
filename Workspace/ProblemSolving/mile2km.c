#include <stdio.h>

// Function to convert miles to kilometers
void mile2km(double miles[], int size) {
    const double MILES_TO_KM = 1.6093;

    for (int i = 0; i < size; i++) {
        double km = miles[i] * MILES_TO_KM;
        printf("%.2f miles is equal to %.2f kilometers.\n", miles[i], km);
    }
}

int main() {
    int size;
    
    printf("Enter the number of miles: ");
    scanf("%d", &size);

    double miles[size];

    // Input miles
    for (int i = 0; i < size; i++) {
        printf("Enter distance in miles %d: ", i + 1);
        scanf("%lf", &miles[i]);
    }

    // Call the function to convert and print kilometers
    mile2km(miles, size);

    return 0;
}
