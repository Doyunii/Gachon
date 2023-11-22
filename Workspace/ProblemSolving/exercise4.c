#include <stdio.h>
#include <string.h>

// Function to count the number of characters in a string
int character_count(const char *str) {
    int count = 0;
    while (*str != '\0') {
        count++;
        str++;
    }
    return count;
}

int main() {
    char input_string[100]; // You can change the size as needed

    printf("Enter a string: ");
    scanf("%s", input_string);

    int count = character_count(input_string);

    printf("Number of characters in the string: %d\n", count);

    return 0;
}
