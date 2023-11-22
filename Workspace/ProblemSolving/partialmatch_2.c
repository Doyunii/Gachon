#include <stdio.h>

int main() {
    char string[1000]; // 충분한 크기의 문자열을 저장할 배열
    char search_string[100]; // 충분한 크기의 검색할 문자열을 저장할 배열

    printf("Enter the full sentence: ");
    fgets(string, sizeof(string), stdin);

    printf("Enter the search string with wildcard (*): ");
    fgets(search_string, sizeof(search_string), stdin);

    // Remove newline characters from the input strings
    string[strcspn(string, "\n")] = '\0';
    search_string[strcspn(search_string, "\n")] = '\0';

    int cursor = 0;
    int i = 0;
    int count = 0;
    int wildcard_position = -1; // Position of the wildcard (*)

    while (string[cursor] != '\0') {
        if (search_string[i] == '*') {
            wildcard_position = i;
            i++;
        } else if (string[cursor] == search_string[i] || search_string[i] == '*') {
            if (search_string[i + 1] == '\0') {
                // Exact match or wildcard match found
                count++;
                if (wildcard_position >= 0) {
                    cursor -= i - wildcard_position; // Backtrack to the wildcard position
                    wildcard_position = -1;
                }
                i = 0;
            } else {
                i++;
            }
        } else {
            i = 0;
            if (wildcard_position >= 0) {
                cursor -= i - wildcard_position; // Backtrack to the wildcard position
                i = wildcard_position;
            }
            wildcard_position = -1;
        }
        cursor++;
    }

    printf("Number of sub-strings that match the search string: %d\n", count);

    return 0;
}
