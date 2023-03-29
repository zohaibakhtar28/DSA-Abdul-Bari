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

int Delete(struct Array *arr, int index) //Returns Deleted Element
{
    int x = 0; //deleted Element by default
    int i;
    if (index >0 && index < arr->length)
    {
        x = arr->A[index];
        for ( i = index; i < arr->length -1; i++)
        {
            arr->A[i] = arr->A[i+1];
        }
        arr->length--;
        return x;
    }
    

}

int main()
{
    struct Array arr ={{2,3,4,5,6},10,5};
    Delete(&arr,4);
    display(arr);
}    