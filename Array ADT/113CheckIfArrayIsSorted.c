#include <stdio.h>
struct Array
{
    int A[10];
    int size;
    int length;
};
void Display(struct Array arr)
{
    for (int i = 0; i < arr.length; i++)
    {
        printf("%d\t", arr.A[i]);
    }
    printf("\n");
}

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void InsertSort(struct Array *arr, int x)
{
    int i = arr->length-1;
    if (arr->length == arr->size)
    {
        return;
    }
    while (i>=0 && arr->A[i]>x)
    {
        arr->A[i+1] = arr->A[i];
        i--;
    }
    arr->A[i+1] = x;
    arr->length++;
    

}

int isSorted(struct Array arr)
{
    int i;
    for ( i = 0; i < arr.length-1; i++)
    {
        if(arr.A[i]>arr.A[i+1])
        {
            return 0; //Not Sorted
        }        
    }
    return 1;
}

void Rearrange(struct Array *arr)
{
    int i =0;
    int j = arr->length-1;
    while (i<j)
    {
        while (arr->A[i]<0)
        {
            i++;
        }
        while (arr->A[j]>=0)
        {
            j--;
        }
        if(i<j)
        {
            swap(&arr->A[i],&arr->A[j]);
        }
    }
    
}
int main()
{
    struct Array arr = {{2, -3, 25, 10, -15,-7}, 10, 6};
    Rearrange(&arr);
    Display(arr);

    return 0;
}