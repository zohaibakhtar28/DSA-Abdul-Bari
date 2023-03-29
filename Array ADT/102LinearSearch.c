#include<stdio.h>
struct Array
{
    int A[10];
    int size;
    int length;
};


int LinearSearch(struct Array arr, int key)
{
    int i;
    for (int i = 0; i < arr.length; i++)
    {
        if (key == arr.A[i])
        {
            return i;
        }
        
    }
    return -1;
    
}



// Linear Search with Transposition
/*
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x= *y;
    *y =temp;
}

int LinearSearch(struct Array *arr, int key)
{
    int i;
    for (int i = 0; i < arr->length; i++)
    {
        if (key == arr->A[i])
        {
            swap(&arr->A[i], &arr->A[i-1]);
            return i;
        }
        
    }
    return -1;
    
}
*/


// Linear Search with Move to Head
/*
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x= *y;
    *y =temp;
}

int LinearSearch(struct Array *arr, int key)
{
    int i;
    for (int i = 0; i < arr->length; i++)
    {
        if (key == arr->A[i])
        {
            swap(&arr->A[i], &arr->A[0]);
            return i;
        }
        
    }
    return -1;
    
}
*/

int main()
{
    struct Array arr ={{2,3,4,5,6},10,5};
    printf("%d\n",LinearSearch(arr, 4) );
    
    // printf("%d\n",LinearSearch(&arr, 4) );// Transposition
    
    return 0;
}
