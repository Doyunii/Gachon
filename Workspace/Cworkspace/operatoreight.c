#include <stdio.h>
int main ()
{
    int i = 3;
    int j = 4;
    if (( ++i > j-- )&&( i++ < --j ))
        i = i-- + ++j;
    else j = i-- - --j;
        printf("%d\n", i);
    return 0;
}