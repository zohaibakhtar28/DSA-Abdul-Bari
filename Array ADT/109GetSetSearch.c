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
int Get(struct Array arr, int index)
{
    if (index >= 0 && index < arr.length)
    {
        return arr.A[index];
    }
    return -1;
}

void Set(struct Array *arr, int index, int x)
{
    if (index >= 0 && index < arr->length)
    {
        arr->A[index] = x;
    }
    return -1;
}

int Max(struct Array arr)
{
    int i;
    int max = arr.A[0];
    for (i = 1; i < arr.length; i++)
    {
        if (arr.A[i] > max)
        {
            max = arr.A[i];
        }
    }
    return max;
}

int Min(struct Array arr)
{
    int i;
    int min = arr.A[0];
    for (i = 1; i < arr.length; i++)
    {
        if (arr.A[i] < min)
        {
            min = arr.A[i];
        }
    }
    return min;
}

int Sum(struct Array arr)
{
    int i;
    int s = 0;
    for (i = 0; i < arr.length; i++)
    {
        s = s + arr.A[i];
    }
    return s;
}

float Avg(struct Array arr)
{
    return (float)Sum(arr) / arr.length;
}
int main()
{
    struct Array arr = {{2, 3, 4, 5, 6}, 10, 5};
    printf("%d\n", Get(arr, 2));

    Set(&arr,0,15);
    Display(arr);

    return 0;
}