#include<stdio.h>
#include<stdlib.h>
struct Array 
{
    int *A;
    int size;
    int length;//Number of Elements
};
int main()
{
    struct Array arr;
    int n;
    printf("Enter size of the Array\n");
    scanf("%d", &arr.size);

    arr.A = (int*)malloc(arr.size*sizeof(int));
    arr.length = 0;

    printf("Enter Number of elements\n");
    scanf("%d", &n);
    arr.length = n;
    printf("Enter Elements in your array\n");
    for (int i = 0; i < arr.length; i++)
    {
        scanf("%d", &arr.A[i]);
    }
    
return 0;
}