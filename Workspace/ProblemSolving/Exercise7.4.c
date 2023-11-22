#include <stdio.h>

void liquid(int gallons, int quarts, int pints, int cups, int* totnumCupPtr) {
    *totnumCupPtr = gallons * 16 + quarts * 4 + pints * 2 + cups;
}

int main() {
    int gallons, quarts, pints, cups;
    int totnumCup;
    int* totnumCupPtr = &totnumCup;

    // user enter the time in gallons, quarts, pints, cups
    printf("Enter the time in gallons, quarts, pints, cups: ");
    scanf("%d %d %d %d", &gallons, &quarts, &pints, &cups);

    // Call the luquid() function
    liquid(gallons, quarts, pints, cups, totnumCup);

    // Display the total number of cups
    printf("Total number of liquid: %d\n", *totnumCupPtr);

    return 0;
}
