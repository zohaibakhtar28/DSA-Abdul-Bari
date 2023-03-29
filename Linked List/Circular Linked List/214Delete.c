#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
} *Head = NULL;

void create(int A[], int n)
{
    struct Node *new, *last; // Last to link new node to prev node
    Head = (struct Node *)malloc(sizeof(struct Node));
    Head->data = A[0];
    Head->next = Head;
    last = Head;

    for (int i = 1; i < n; i++)
    {
        new = (struct Node *)malloc(sizeof(struct Node));
        new->data = A[i];
        new->next = last->next;
        last->next = new;
        last = new;
    }
}

void Display(struct Node *h)
{
    do
    {
        printf("%d ", h->data);
        h = h->next;

    } while (h != Head);
    printf("\n");
}

int Length(struct Node *h)
{
    int len = 0;
    do
    {
        len++;
        h = h->next;

    } while (h != Head);
    return len;
}
int Delete(struct Node *p, int index)
{
    struct Node *q;
    int i, x;

    if (index < 0 || index > Length(Head))
        return -1;
    if (index == 1)
    {
        while (p->next != Head)
            p = p->next;
        x = Head->data;
        if (Head == p)
        {
            free(Head);
            Head = NULL;
        }
        else
        {
            p->next = Head->next;
            free(Head);
            Head = p->next;
        }
    }
    else
    {
        for (i = 0; i < index - 2; i++)
            p = p->next;
        q = p->next;
        p->next = q->next;
        x = q->data;
        free(q);
        return x;
    }
}
    int main()
    {
        int A[] = {2, 3, 4, 5, 6};
        create(A, 5);
        Display(Head);

        return 0;
        return 0;
    }
    