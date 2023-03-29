#include <stdio.h>
#include <stdlib.h>

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

struct Node *LinearSearch(struct Node *p, int key)
{
    while (p != NULL)
    {
        if (key == p->data)
        {
            return p;
        }
        p = p->next;
    }
    return NULL; // Shows Unsuccesfull Search
}
int main()
{
    int A[] = {2, 4, 6, 8, 10};
    create(A, 5);
    struct Node *temp = NULL;
    temp = LinearSearch(first, 8);
    if (temp)
    {
        printf("Key is found %d\n", temp->data);
    }
    else
        printf("Key not found\n");
    return 0;
}