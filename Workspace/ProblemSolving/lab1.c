/*
maker : 202037006 권도윤
code function : This is a code that calculate the elements in the productivity array as the product
                of the elements in the hours and efficiency
date : 23. 9. 27. <problem solving>

*/

#include <stdio.h>
/*compute function 
productivity[] = hours[] * efficiency[]
*/
void compute(float hours[], float efficiency[], float productivity[], int size) {
    for (int i = 0; i < size; i++) {
        productivity[i] = hours[i] * efficiency[i];
    }
}
/* display function
accepts the productivity array as parameter and display
*/
void display(float productivity[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Productivity[%d]: %.2f\n", i, productivity[i]);
    }
}

int main() {
    const int size = 3; // size of array
    float hours[size] = {10.2, 12.8, 5.2}; //numbers stored in hours (given)
    float efficiency[size] = {8, 8.5, 6}; //nnumbers stored in efficienct(given)
    float productivity[size];

    compute(hours, efficiency, productivity, size); //function call compute()-calculate
    display(productivity, size); //function call display()

    return 0;
}