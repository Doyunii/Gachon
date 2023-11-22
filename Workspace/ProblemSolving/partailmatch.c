/**

 *

 * Author: 202037006 권도윤

 * Date: 10.28.2023

 * Course: Problem Solving Methods

 * File: partialmatch.c

 * Summary of File:

 * to match a user-input sub-string with wildcard characters 

 * (specifically '*') in a given full text. 

 *

 */

#include <stdio.h>

int main() {
    char text[1000];
    char subString[100];
    int isMatch = 0;

    printf("Text matching program\n\n");

    // Input full text
    printf("Type Text: ");
    fgets(text, sizeof(text), stdin);
    int textLength = 0;

    // Remove '\n'
    while (text[textLength] != '\0') {
        textLength++;
    }
    text[textLength - 1] = '\0';

    // Input sub-string
    printf("Type sub-string for matching: ");
    fgets(subString, sizeof(subString), stdin);
    int subStringLength = 0;

    // Remove '\n'
    while (subString[subStringLength] != '\0') {
        subStringLength++;
    }
    subString[subStringLength - 1] = '\0';

    int i = 0;
    int j = 0;
    while (i <= textLength - subStringLength) {
        int isMatch = 1;
        for (j = 0; j < subStringLength; j++) {
            if (subString[j] == '*') {
                break; // Ignore wildcard and check the rest
            }
            if (text[i + j] != subString[j]) {
                isMatch = 0;
                break;
            }
        }

        if (isMatch) {
            printf("Match Found!\n");
            return 0; // Found match, exit
        }

        i++;
    }

    // No match found
    printf("There is no matched pattern\n");

    return 0;
}
