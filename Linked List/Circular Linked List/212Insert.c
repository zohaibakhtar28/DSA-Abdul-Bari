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
void Insert(struct Node *h, int pos, int x)
{
    struct Node *t;
    if (pos < 0 || pos > Length(h))
    {
        return;
    }

    if (pos == 0)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = x;
        if (Head == NULL)
        {
            Head = t;
            Head->next = Head;
        }
        else
        {
            while (h->next != Head)
            {
                h = h->next;
            }
            h->next = t;
            t->next = Head;
            Head = t;
        }
    }
    else
    {
        for (int i = 0; i < pos - 1; i++)
            h = h->next;
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = x;
        t->next = h->next;
        h->next = t;
    }
}
int main()
{
    int A[] = {2, 3, 4, 5, 6};
    create(A, 5);
    Display(Head);

    return 0;
}