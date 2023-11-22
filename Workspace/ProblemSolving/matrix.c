#include <stdio.h>

int main() {
    int matrix1[10][10];
    int matrix2[10][10];
    int matrix3[10][10];

    // Fill Matrix1 with values increasing by 1
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            matrix1[i][j] = i + j;
        }
    }

    // Fill Matrix2 with values increasing by 2
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            matrix2[i][j] = 2 * (i + j);
        }
    }

    // Perform matrix multiplication
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            matrix3[i][j] = 0;
            for (int k = 0; k < 10; k++) {
                matrix3[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Print the matrices
    printf("=====================MATRIX1=====================\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%5d ", matrix1[i][j]);
        }
        printf("\n");
    }

    printf("=====================MATRIX2=====================\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%5d ", matrix2[i][j]);
        }
        printf("\n");
    }

    printf("=====================MATRIX3=====================\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%10d ", matrix3[i][j]);
        }
        printf("\n");
    }

    return 0;
}
