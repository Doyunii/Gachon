#include <stdio.h>

int main ()
{
    int num1, num2;
    int num3=30, num4=40;
    int result= num4/num3;

    printf("num1:%d, num2:%d \n", num1, num2);
    num1 = 10;
    num2 = 20;

    printf("num1: %d, num2:%d, num \n", num1, num2);
    printf(
        "num3:%d, num4:%d \n", num3, num4
    );
    printf("result:%d\n", result);


    return 0;
}