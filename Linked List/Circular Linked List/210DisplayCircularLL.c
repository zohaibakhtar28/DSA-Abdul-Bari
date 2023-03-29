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

void RDisplay(struct Node *h)
{
 static int flag=0;
 if(h!=Head || flag==0)
 {
 flag=1;
 printf("%d ",h->data);
 RDisplay(h->next);
 }
 flag=0;
}
int main()
{
    int A[] = {2, 3, 4, 5, 6};
    create(A, 5);
    Display(Head);

    return 0;
}