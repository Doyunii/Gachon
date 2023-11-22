#include <stdio.h>
#include <string.h>

// Define the structure for a person
struct Person {
    char name[50];
    int age;
    char hobby[50];
};

// Define the structure for the index
struct Index {
    char key[50];
    int data_index; // Index to the corresponding data in the dataset
};

// Function to search and print information for a given name
void searchAndPrint(struct Index* index, struct Person* dataset, int datasetSize, const char* searchName) {
    int found = 0;
    for (int i = 0; i < datasetSize; i++) {
        if (strcmp(index[i].key, searchName) == 0) {
            found = 1;
            int data_index = index[i].data_index;
            printf("Name: %s\n", dataset[data_index].name);
            printf("Age: %d\n", dataset[data_index].age);
            printf("Hobby: %s\n", dataset[data_index].hobby);
            break; // Stop searching once found
        }
    }

    if (!found) {
        printf("Name not found in the dataset.\n");
    }
}

int main() {
    // Define the dataset
    struct Person dataset[100];
    int datasetSize = 0; // Initialize to 0

    // Populate the dataset with sample data
    strcpy(dataset[datasetSize].name, "Lee");
    dataset[datasetSize].age = 30;
    strcpy(dataset[datasetSize].hobby, "Reading");
    datasetSize++;

    strcpy(dataset[datasetSize].name, "Park");
    dataset[datasetSize].age = 25;
    strcpy(dataset[datasetSize].hobby, "Swimming");
    datasetSize++;

    // Create an index
    struct Index index[100];
    for (int i = 0; i < datasetSize; i++) {
        strcpy(index[i].key, dataset[i].name);
        index[i].data_index = i;
    }

    // Search and print information for names "Lee" and "Park"
    searchAndPrint(index, dataset, datasetSize, "Lee");
    printf("\n--------------------\n");
    searchAndPrint(index, dataset, datasetSize, "Park");

    return 0;
}
/*
#include <stdio.h>
#include <string.h>

// Define the structure for a person
struct Person {
    char name[50];
    int age;
    char hobby[50];
};

// Define the structure for the index
struct Index {
    char key[50];
    int data_index; // Index to the corresponding data in the dataset
};

// Function to search and print information for a given name
void searchAndPrint(struct Index* index, struct Person* dataset, int datasetSize, const char* searchName) {
    int found = 0;
    for (int i = 0; i < datasetSize; i++) {
        if (strcmp(index[i].key, searchName) == 0) {
            found = 1;
            int data_index = index[i].data_index;
            printf("Name: %s\n", dataset[data_index].name);
            printf("Age: %d\n", dataset[data_index].age);
            printf("Hobby: %s\n", dataset[data_index].hobby);
            break; // Stop searching once found
        }
    }

    if (!found) {
        printf("Name not found in the dataset.\n");
    }
}

int main() {
    // Define the dataset
    struct Person dataset[100];
    int datasetSize = 0; // Initialize to 0

    // Populate the dataset with sample data
    strcpy(dataset[datasetSize].name, "Lee");
    dataset[datasetSize].age = 30;
    strcpy(dataset[datasetSize].hobby, "Reading");
    datasetSize++;

    strcpy(dataset[datasetSize].name, "Park");
    dataset[datasetSize].age = 25;
    strcpy(dataset[datasetSize].hobby, "Swimming");
    datasetSize++;

    // Create an index
    struct Index index[100];
    for (int i = 0; i < datasetSize; i++) {
        strcpy(index[i].key, dataset[i].name);
        index[i].data_index = i;
    }

    // Get the name from the user
    char searchName[50];
    printf("Enter a name to search: ");
    scanf("%s", searchName);

    // Search and print information for the user-entered name
    searchAndPrint(index, dataset, datasetSize, searchName);

    return 0;
}
*/
