
// header file that declares functions that deal with standard input and output
#include <stdio.h>

#include "linked_list.h"
#include "queue.h"
#include "stack.h"

#define size_limit 100

int main() {

    // Array
    int arr1[10];
    arr1[0] = 1;

    for (int i = 0; i < 10; i++) {
        arr1[i] = 0;
        printf("Arr value: %i\n", arr1[i]);
    }

    // Linked List

    struct Node node;

    // Stack

    Stack stack;
    int length = 100;
    int arr2[length];
    for (int i = 0; i < length; ++i) {
        arr2[i] = i;
    }

    stack.data = { 1, 2, 3, 4, 5 };

    // Queue

    Queue queue;
    queue.arr = arr1;

    // Binary Tree



    // Heap



    // Hashing



    // Graph



    return 0;
}

