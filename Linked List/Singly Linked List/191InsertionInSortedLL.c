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

void Insert(struct Node *p, int x)
{
    struct Node *prev = NULL;

    struct Node *t;
    t = (struct Node *)malloc(sizeof(struct Node));
    t->data = x;
    t->next = NULL;

    if (first = NULL) // If there is no NODE. New NODE is the first NODE.
    {
        first = t;
    }
    else
    {
        while (p && p->data < x) // Moving p and prev follows it.
        {
            prev = p;
            p = p->next;
        }
        if(p == first) // If we've stopped ptr p is it a first NODE.
        {
            t->next = first;
            first = t;
        } 
        else
        {
            t->next = prev->next;
            prev->next = t;
        }
    }
}
int main()
{
    int A[] = {2, 4, 6, 8, 10};
    create(A, 5);
    // Display(first);
    return 0;
}