#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node
{
    int data;
    struct Node *next;
} * first;

void create(int Arr[], int num_elem)
{
    int i;
    struct Node *new, *last;
    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = Arr[0];
    first->next = NULL;
    last = first;

    for (i = 1; i < num_elem; i++)
    {
        new = (struct Node *)malloc(sizeof(struct Node));
        new->data = Arr[i];
        new->next = NULL;
        last->next = new;
        last = new;
    }
}

void Display(struct Node *p)
{
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}

void isSorted(struct Node *p)
{
    int x = -32768;
    while (p != NULL)
    {
        if (p->data < x)
        {
            printf("Not Sorted\n");
            return;
        }
        x = p->data;
        p = p->next;
    }
    printf("Sorted\n");
}
int main()
{
    int A[] = {2, 4, 6, 5, 10};
    create(A, 5);
    Display(first);
    isSorted(first);
    return 0;
}