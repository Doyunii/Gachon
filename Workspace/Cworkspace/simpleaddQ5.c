#include <stdio.h>

int main (void)
{
    int num1, num2, num3;
    int result;

    printf("세개의 정수 입력 :  ");
    scanf("%d %d %d", &num1, &num2, &num3);

   /* printf("(num1 - num2) X (num2 + num3) X (num3 % num1) = %d",(num1 - num2) * (num2 + num3) * (num3 % num1) );
   오류발생 segmentation fault*/
   // result 값을 추가해서 계산//
    
    result = (num1 - num2) * (num2 + num3) * (num3 % num1);

    printf("result is : %d\n", result);

    return 0;
}