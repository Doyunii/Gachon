#include <stdio.h>

int main (void)
{
    int quotient, remainder;
    int num1, num2;

    printf("두개의 정수 입력 : ");
    scanf("%d %d", &num1, &num2);

    quotient = num1 / num2;
    remainder = num1 % num2;

    printf("%d / %d = %d...%d\n", num1, num2, quotient, remainder);


}    