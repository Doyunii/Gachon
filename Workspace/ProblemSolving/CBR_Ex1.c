#include <stdio.h>

void minmax(int, int, int *, int *);

int main() {
    int num1, num2;
    int smallest, largest;
    printf("Write your two integers : ");
    scanf(" %d %d",&num1, &num2);

    minmax(num1, num2, &smallest, &largest);

    printf("Smallest value: %d\n", smallest);
    printf("Largest value: %d\n", largest);

    return 0;
}

void minmax(int val1, int val2, int *smallest, int *largest) {
    if (val1 < val2) {
        *smallest = val1;
        *largest = val2;
    } else {
        *smallest = val2;
        *largest = val1;
    }
}
