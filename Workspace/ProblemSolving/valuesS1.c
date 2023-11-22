#include <stdio.h>
int main () {
    int x = 40, y = 20, sol1, sol2, sol3;
    int *xptr, *yptr, *wptr;

    xptr = &x;
    yptr = &y;

    sol1 = **&xptr;
    sol2 = (4 * *xptr) / *yptr + 22;
    wptr = &y;
    sol3 = *wptr;

    printf("%d, %d, %d", sol1, sol2, sol3);
    return 0;
}
