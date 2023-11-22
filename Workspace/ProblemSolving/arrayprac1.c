#include <stdio.h>
#include <string.h>

int main() {
    char *p;
    char s[81];
    strcpy(s, "He drinks coke each day.");
    
    for (p = s + 10; *p !='\0'; p++) {
        if (*p == 'c')
            *p = 'C';
        else if (*p == 'd')
            *p = 'D';
        else if (*p == 'e')
            *p = 'E';
        else if (*p == ' ')
            *p = '\n';
    }
    
    printf("%s\n", s);
    
    return 0;
}
