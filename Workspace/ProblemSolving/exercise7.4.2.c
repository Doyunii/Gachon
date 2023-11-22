#include <stdio.h>

void liquid(int totalCups, int* gallons, int* quarts, int* pints, int* cups) {
    *gallons = totalCups / 16;
    totalCups %= 16;
    
    *quarts = totalCups / 4;
    totalCups %= 4;
    
    *pints = totalCups / 2;
    *cups = totalCups % 2;
}

int main() {
    int totalCups;
    int gallons, quarts, pints, cups;
    printf("Total Cups : ");
    scanf("%d", &totalCups);
    
    liquid(totalCups, &gallons, &quarts, &pints, &cups);
    
    printf("Total: %d Cups\n", totalCups);
    printf("Gallons: %d\n", gallons);
    printf("Quarts: %d\n", quarts);
    printf("Pints: %d\n", pints);
    printf("Cups: %d\n", cups);
    
    return 0;
}
