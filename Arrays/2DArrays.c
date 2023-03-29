#include <stdio.h>
#include <stdlib.h>
// Declaring 2D Array using 3 Methods.
int main()
{
    // Method 1 :-

    int A[3][4];
    //(Fully in Stack)

    // Method 2 :-

    // Using Array of pointers
    int *B[3]; // This is an Array of 3 pointers in stack

    B[0] = (int *)malloc(4 * sizeof(int)); // Pointer points to row of 4 integer in Array
    B[1] = (int *)malloc(4 * sizeof(int));
    B[2] = (int *)malloc(4 * sizeof(int));

    // Here Each of 3 Pointer points to Linear elements in heap.
    //  This is partially in heap and partially in stack.

    // Access by B[i][j];

    // Method 3:-
    // Using Double pointers.
    int **C; // Double pointer in stack.
    C = (int **)malloc(3 * sizeof(int));
    // Double pointer ppoints to 3 Rows in Heap.

    B[0] = (int *)malloc(4 * sizeof(int)); // Double Pointer points to row of 4 integer in Array in heap
    B[1] = (int *)malloc(4 * sizeof(int));
    B[2] = (int *)malloc(4 * sizeof(int));

    // Completely in Heap.
    return 0;
}