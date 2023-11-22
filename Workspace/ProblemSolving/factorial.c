#include <stdio.h>

int factorial(int n) {
    if (n == 0)
        return 1;
    else {
        printf("%d * factorial(%d)\n", n, n-1);
        printf("\tfactorial(%d) = %d \n", n-1, n-1);
        return (n * factorial(n - 1));
    }
}

int main() {
    int n= 0;
    printf(" input number : ");
    scanf("%d", &n);
    int result = factorial(n);
    printf("%d! is %d\n", n, result);
    return 0;
}