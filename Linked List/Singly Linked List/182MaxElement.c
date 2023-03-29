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

int Max(struct Node *p)
{
    int m = -32768;
    while (p)
    {
        if (p->data > m)
        {
            m = p->data;
        }
        p = p->next;
    }

    return m;
}

int RMax(struct Node *p)
{
    int x = 0;
    if (p == 0)
    {
        return -32768;
    }
    x = RMax(p->next);
    if (x > p->data)
    {
        return x;
    }
    else
        return p->data;
}
int main()
{
    int A[] = {2, 4, 6, 8, 10};
    create(A, 5);
    Display(first);
    return 0;
}