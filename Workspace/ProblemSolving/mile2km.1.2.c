#include <stdio.h>

#define MAXNUM 5

void mile2km(float[MAXNUM]);

int main() {
    float miles[MAXNUM];

    /* Store values in the miles array */
    for (int i = 0; i < MAXNUM; i++) {
        printf("Enter distance in miles %d: ", i + 1);
        scanf("%f", &miles[i]);
    }

    mile2km(miles);

    return 0;
}

void mile2km(float local_array[]) {
    for (int i = 0; i < MAXNUM; i++) {
        printf("%.2f miles is equal to %.2f kilometers.\n", local_array[i], local_array[i] * 1.6093);
    }
}
