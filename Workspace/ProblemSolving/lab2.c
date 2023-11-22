/**

 *

 * Author: 202037006 권도윤

 * Date: 10.12.2023

 * Course: Problem Solving Methods

 * File: Lab2.c

 * Summary of File:

 * This file contains code which implements an index-based search engine

 * for a registration list.

 *

 */

 

/*
#ifdef _MSC_VER

#define _CRT_SECURE_NO_WARNINGS

#endif
*/

 

#include <stdio.h>

#include <string.h>

#define MAX 4

 

 /**

  * Summary of struct :

  * This REGISTRATION struct contains registration's information of name,

  *age and hobby

  *

 
  */

 

struct REGISTRATION {
        // write down your solution    
        // Define structure Registration
    char name[51];
    int age;
    char hobby[51];
};

 

/**

 * Summary of struct :

 * This INDEX struct contains hobby and array index

 *

 */

 

struct INDEX {
    // write down your solution
    // Define struct array index
    char hobby[51];
    int array_index;

};

 

/**

* void create_index(struct REGISTRATION reg_arr[], struct INDEX index_arr[])

*

* Summary of the create_index function :

*

* The create_index fuction, fills values in the struct INDEX array based

on struct REGISTRATION array

*

* Parameters : array: containing struct REGISTRATION, struct INDEX

 
* Return Value : Nothing

*

* Description:

*

*   This function fills in the values of the index_arr based on the reg_arr

* Note: Modifies the struct INDEX array "in place".

* You can use strcpy function

*

*/

void create_index(struct REGISTRATION reg_arr[], struct INDEX index_arr[]) {
    // write down your solution
    // function create index
    // fill in the values of index array based on registration.
    for (int i = 0; i < MAX; i++) {
        strcpy(index_arr[i].hobby, reg_arr[i].hobby);
        index_arr[i].array_index = i;
    }
}

 

/**

 * int search_hobby(struct INDEX index_arr[], char* search_key)

 *

 * Summary of the search_hobby function :

 *

 * The search function, searches the index in struct INDEX array

 * and returns the array index number

 *

 * Parameters : array: containing struct INDEX, char*

 * Return Value : integer value, which is search_key's value in

 *index_arr return -1 if search_key is not found

 *

 
 * You can use strcmp function

 *

 */

int search_hobby(struct INDEX* index_arr, char* search_key) {
    // write down your solution
    for (int i = 0; i < MAX; i++) {
        if (strcmp(index_arr[i].hobby, search_key) == 0) {
            return index_arr[i].array_index;
        }
    }
    return -1;
}

 

// Please do not modify the main function

int main() {

    struct REGISTRATION registration[MAX] = { {"kim", 39, "tennis"},

                                             {"ko", 15, "soccer"},

                                             {"lee", 17, "baseball"},

                                             {"choi", 21, "basketball"} };

    struct INDEX index[MAX];

    char search_key[51];

    int idx = -1;

 

    create_index(registration, index);

 

    printf("Enter the hobby you want to find: ");

    scanf("%s", search_key);

 

    printf("\n");

    idx = search_hobby(index, search_key);

    if (idx == -1)

 
        printf("NOT Found.\n"); // Note: Defensive coding

    else

        printf("(%s, %d, %s)\n", registration[idx].name, registration[idx].age,

            registration[idx].hobby);

 

    return 0;

}