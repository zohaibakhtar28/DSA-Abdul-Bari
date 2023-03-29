#include <stdio.h>
#include <stdlib.h>
struct Array
{
    int *A;
    int size;
    int length;
} arr;

void create()
{
    int size;
    printf("Enter size of Array\n");
    scanf("%d", &size);
    arr.size = size;
    arr.A = (int *)malloc(arr.size * sizeof(int));
    arr.length = 0;
    printf("Enter Number of Elements\n");
    scanf("%d", &arr.length);
    printf("Enter Elements in your Array\n");
    for (int i = 0; i < arr.length; i++)
    {
        scanf("%d", &arr.A[i]);
    }
}

void display()
{

    for (int i = 0; i < arr.length; i++)
    {
        printf("%d ", arr.A[i]);
    }
    printf("\n");
}

void append( int x)
{
    if (arr.length < arr.size)
    {
        arr.A[arr.length] = x;
    }
    arr.length++;
    display();
}

void insert(int index, int x)
{
    int i;
    if (index > 0 && index <= arr.length)
    {
        for (int i = arr.length; i > index; i--)
        {
            arr.A[i] = arr.A[i - 1];
        }
        arr.A[index] = x;
        arr.length++;
    }
    display();
}
int main()
{
    int choice;
    int append_num;
    int insert_index, insert_num;
    printf("Create Your Array ");
    create();
    while (1)
    {

        printf("Enter Your Choice - 1.)Display Array, 2.)Append Array, 3.)Insert at any Index\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Your Array is :-\n");
            display();
            break;
        case 2:
            printf("Enter Integer to Append\n");
            scanf("%d", &append_num);
            printf("Your Original Array\n");
            display();
            printf("Your Array after Append\n");
            append(append_num);
            break;
        case 3:
            printf("Enter Index and Number to insert\n");
            scanf("%d %d", &insert_index, &insert_num);
            printf("Original Array\n");
            display();
            printf("Array after insertion\n");
            insert(insert_index, insert_num);
            break;
        default:
            break;
        }
    }
    return 0;
}