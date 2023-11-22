#include <stdio.h>

void newVal(float *);

int main() {
    float testval;
    printf("Enter a number: ");
    scanf("%f", &testval); // input 150.4
    newVal(&testval); /* function call */
    printf("Updated value: %.2f\n", testval);
    return 0;
}

void newVal(float *num) {
    *num = *num + 20.2;
}
