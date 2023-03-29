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

int Count(struct Node *p)
{
    int l = 0;
    while (p!=NULL)
    {
        l++;
        p=p->next;
    }
    return l;
    
}

int Delete(struct Node *p, int index)
{
    int x = -1; // To preserve deleted n ode data.
    struct Node *q = NULL;
    if (index <1 || index > count(p))
    {
        return -1;
    }
    if (index == 1)
    {
        q = first;
        first = first->next;
        x = q->data;
        free(q);
        return x;
    }
    else
    {
        for (int i = 0; i < index-1; i++)
        {
            q=p;
            p=p->next;
        }
        q->next = p->next;
        x = p->data;
        free(p);
        return x;
    }

}
int main()
{
    int A[] = {2, 4, 6, 8, 10};
    create(A, 5);
    Display(first);
    return 0;
}