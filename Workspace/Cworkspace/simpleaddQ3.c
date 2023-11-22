#include <stdio.h>

int main (void)
{
    int result;
    int num1;

    printf("하나의 정수 입력 : ");
    scanf("%d", &num1);

    result = num1 * num1;

    printf("%d^2 = %d\n", num1, result);

    return 0;
}