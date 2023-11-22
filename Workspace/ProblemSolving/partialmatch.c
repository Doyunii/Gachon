#include <stdio.h>
#include <string.h>

int main() {
    char string[] = "My name is hong gil dong. Hong gil dong is a legendary figure.";
    char search_string[] = "hong*dong";

    int cursor = 0;
    int i = 0;
    int count = 0;

    while (cursor < strlen(string)) {
        if (string[cursor] == search_string[i] || search_string[i] == '*') {
            if (search_string[i + 1] == '\0') {
                // Exact match or wildcard match found
                count++;
                i = 0;
            } else {
                i++;
            }
        } else {
            i = 0;
        }
        cursor++;
    }

    printf("Number of sub-strings that match the search string: %d\n", count);

    return 0;
}
