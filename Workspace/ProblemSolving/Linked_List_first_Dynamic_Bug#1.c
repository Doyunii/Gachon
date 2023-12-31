/*
// Linked list (dynamic)
#define DEBUG
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

struct NODE
{
    int key;
    struct NODE* next;
};

struct NODE* CreateNode();
int InsertKey(struct NODE*, int);
int DeleteKey(struct NODE*, int);
void ScanList(struct NODE*);
void FreeList(struct NODE*);

// Call by Value cant access to the main first
// So what I need is to use Call by Reference to connect main first to Insert Key main


/*

struct NODE* CreateNode();
int InsertKey(struct NODE**, int);
int DeleteKey(struct NODE**, int);
void ScanList(struct NODE*);
void FreeList(struct NODE*);

Like this Use Call by reference

int main()
{
    int ret;
    int input_values[] = { 10, 20, 30, 20, 40, 5, 50 };
    int length = sizeof(input_values) / sizeof(int);

#ifdef DEBUG
    printf("The length of input_values is: %d\n", length);
#endif

    struct NODE* first = NULL;  

    for (int i = 0; i < length; i++)
    {
        ret = InsertKey(first, input_values[i]);  // ret = Inserkey(&first, input_values[i]);

#ifdef DEBUG
        if (ret == 0)
            printf("Succeeded to insert the key value: %d\n", input_values[i]);
        else
            printf("Failed to insert the key value: %d\n", input_values[i]);

        ScanList(first);
#endif
    }

#ifdef DEBUG
    printf("\nFinal Result\n");
#endif

    ScanList(first);
    FreeList(first);

    return 0;
}

struct NODE* CreateNode()
{
    struct NODE* new_node = NULL;

#ifdef DEBUG
    printf("Return a new node address.\n");
#endif

    new_node = (struct NODE*)malloc(sizeof(struct NODE));

    if (new_node == NULL)
    {
        printf("Memory is full.\n");
        return NULL;
    }
    else
    {
        return new_node;
    }
}

int InsertKey(struct NODE* first, int value)
{
#ifdef DEBUG
    printf("\nInsert Value: %d\n", value);
#endif

    struct NODE* ptr = first, * prev_ptr = NULL, * new_node = NULL;

    while (ptr)
    {
        if (first == NULL || ptr->key > value)
            break;
        else if (ptr->key == value)
        {
#ifdef DEBUG
            printf("The input key already exists.\n");
#endif
            return -1;
        }

#ifdef DEBUG
        printf("Key value of the current node: %d.\n", ptr->key);
#endif

        prev_ptr = ptr;
        ptr = ptr->next;
    }

#ifdef DEBUG
    printf("Create a new node.\n");
#endif

    new_node = CreateNode();

    if (new_node != NULL)
    {
        if (first == NULL || (ptr != NULL && ptr->key > value))
            first = new_node;
        else
            prev_ptr->next = new_node;

        new_node->key = value;
        new_node->next = ptr;

        return 0;
    }
    else
    {
#ifdef DEBUG
        printf("Fail to create a new node.\n");
#endif
        return -1;
    }
}

void ScanList(struct NODE* first)
{
    printf("\n-----Start ScanList-----\n");

    struct NODE* ptr = first;
    int i = 0;

    while (ptr != NULL)
    {
        printf("The %d-th node's key value: %d\n", i, ptr->key);
        ptr = ptr->next;
        i++;
    }

    printf("-----End ScanList-----\n\n");
}

void FreeList(struct NODE* first)
{
    struct NODE* ptr = first, * tmp = NULL;
    int i = 0;

    while (ptr != NULL)
    {
        printf("Free the %d-th node.\n", i);
        tmp = ptr;
        ptr = ptr->next;
        free(tmp);
        i++;
    }
}
*/


//THis is the rewrite code


// Linked list (dynamic)
#define DEBUG
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

struct NODE
{
    int key;
    struct NODE* next;
};

struct NODE* CreateNode();
int InsertKey(struct NODE**, int); // Use call by reference
int DeleteKey(struct NODE**, int);
void ScanList(struct NODE*);
void FreeList(struct NODE*);

int main()
{
    int ret;
    int input_values[] = { 10, 20, 30, 20, 40, 5, 50 };
    int length = sizeof(input_values) / sizeof(int);

#ifdef DEBUG
    printf("The length of input_values is: %d\n", length);
#endif

    struct NODE* first = NULL;  // struct NODE** first = NULL;

    for (int i = 0; i < length; i++)
    {
        ret = InsertKey(&first, input_values[i]);  // Use call by reference

#ifdef DEBUG
        if (ret == 0)
            printf("Succeeded to insert the key value: %d\n", input_values[i]);
        else
            printf("Failed to insert the key value: %d\n", input_values[i]);

        ScanList(first);
#endif
    }

#ifdef DEBUG
    printf("\nFinal Result\n");
#endif

    ScanList(first);
    FreeList(first);

    return 0;
}

struct NODE* CreateNode()
{
    struct NODE* new_node = NULL;

#ifdef DEBUG
    printf("Return a new node address.\n");
#endif

    new_node = (struct NODE*)malloc(sizeof(struct NODE));

    if (new_node == NULL)
    {
        printf("Memory is full.\n");
        return NULL;
    }
    else
    {
        return new_node;
    }
}

int InsertKey(struct NODE** first, int value)  // Use call by reference
{
#ifdef DEBUG
    printf("\nInsert Value: %d\n", value);
#endif

    struct NODE* ptr = *first, *prev_ptr = NULL, *new_node = NULL;

    while (ptr)
    {
        if (*first == NULL || ptr->key > value)
            break;
        else if (ptr->key == value)
        {
#ifdef DEBUG
            printf("The input key already exists.\n");
#endif
            return -1;
        }

#ifdef DEBUG
        printf("Key value of the current node: %d.\n", ptr->key);
#endif

        prev_ptr = ptr;
        ptr = ptr->next;
    }

#ifdef DEBUG
    printf("Create a new node.\n");
#endif

    new_node = CreateNode();

    if (new_node != NULL)
    {
        if (*first == NULL || (ptr != NULL && ptr->key > value))
            *first = new_node;
        else
            prev_ptr->next = new_node;

        new_node->key = value;
        new_node->next = ptr;

        return 0;
    }
    else
    {
#ifdef DEBUG
        printf("Fail to create a new node.\n");
#endif
        return -1;
    }
}

void ScanList(struct NODE* first)
{
    printf("\n-----Start ScanList-----\n");

    struct NODE* ptr = first;
    int i = 0;

    while (ptr != NULL)
    {
        printf("The %d-th node's key value: %d\n", i, ptr->key);
        ptr = ptr->next;
        i++;
    }

    printf("-----End ScanList-----\n\n");
}

void FreeList(struct NODE* first)
{
    struct NODE* ptr = first, *tmp = NULL;
    int i = 0;

    while (ptr != NULL)
    {
        printf("Free the %d-th node.\n", i);
        tmp = ptr;
        ptr = ptr->next;
        free(tmp);
        i++;
    }
}
