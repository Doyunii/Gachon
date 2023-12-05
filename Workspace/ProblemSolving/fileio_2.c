#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, sum = 0;
    FILE *inFile, *outFile;

    inFile = fopen("myinFile.txt", "r");
    if (inFile == NULL){
        printf("input file could not be opened");
        exit(1);
    }
    outFile = fopen("myoutFile", "w");
    if (outFile == NULL){
        printf("Output file could not be opened");
        exit(1);
    }

    /* Read and sum the integers from the input file and write the sum to the out out File*/
    while(fscanf(inFile, "%d", &a)==1) //Loop until EOF
        sum = sum + a;
    fprintf(outFile, "The sum is %d", sum);

    fclose(inFile);
    fclose(outFile);
}