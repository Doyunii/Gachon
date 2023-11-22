#include <stdio.h>

int main()
{
    int num1 = 10;
    int num2 = (num1--)+2; 
    /* 선 연산 후 감소 이기 때문에 선연산 num1+2로 num2 선언 후 다음 행 부터
    num 1 -- 인정 되어서 10이 아닌 9로 인식됨*/

    printf("num1 is %d\n\n", num1); //후위 감소한 상태
    printf("num2 is %d\n", num2);
    
    return 0;
}