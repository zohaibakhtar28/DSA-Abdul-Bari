#include <stdio.h>
#include <stdlib.h>

struct Node
{
    struct Node *prev;
    int data;
    struct Node *next;

} *first = NULL;

void Create(int A[], int num_elem)
{
    struct Node *new, *last;
    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = A[0];
    first->prev = first->next = NULL;
    last = first;

    for (int i = 1; i < num_elem; i++)
    {
        new = (struct Node *)malloc(sizeof(struct Node));
        new->data = A[i];
        new->next = last->next;
        new->prev = last;
        last->next = new;
        last = new;
    }
}

void Display(struct Node *p)
{
    while (p)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

int Length(struct Node *p)
{
    int count = 0;

    do
    {
        count++;
        p = p->next;
    } while (p != NULL);

    return count;
}

void Delete(struct Node *p, int index)
{
    struct Node *q;
    int x = -1;
    if (index < 1 || index > Length(p))
    {
        return -1;
    }
    if (index == 1)
    {
        first = first->next;
        if (first)
        {
            first->prev = NULL;
        }
        x = p->data;
        free(p);
    }
    else
    {
        for (int i = 0; i < index; i++)
        {
            p = p->next;
        }
        p->prev->next = p->next;
        if (p->next)
        {
            p->next->prev = p->prev;
        }
        x = p->data;
        free(p);
    }
    return x;
}
int main()
{

    int A[] = {10, 20, 30, 40, 50};
    Create(A, 5);
    printf("Length : %d\n", Length(first));
    Display(first);

    return 0;
}