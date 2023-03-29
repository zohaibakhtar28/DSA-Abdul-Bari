#include<stdio.h>
struct Array
{
    int A[10];
    int size;
    int length;
};

void display(struct Array arr)
{
    for (int i = 0; i < arr.length; i++)
    {
        printf("%d ",arr.A[i]);
    }
    
}

void Append(struct Array *arr, int x)
{
    if (arr->length<arr->length)
    {
        arr->A[arr->length] = x;
        arr->length ++;
    }
    
}
void Insert(struct  Array *arr, int  index, int x)
{
    int i;
    if (index>0 && index<=arr->length)
    {
        for ( i = arr->length; i > index; i--)
        {
            arr->A[i] = arr->A[i--];

        }
        arr->A[index] = x;
        arr->length++;
    }
    
}
int main()
{
    struct Array arr ={{2,3,4,5,6},10,5};
    //Append(&arr, 99);
    //display(arr);

    Insert(&arr, 3, 99);
    display(arr);

return 0;
}