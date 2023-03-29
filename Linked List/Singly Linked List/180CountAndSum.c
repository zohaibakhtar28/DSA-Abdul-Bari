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

int RCount(struct Node *p)
{
    
   if (p!=NULL)
   {
    return RCount(p->next) + 1;
   }
   else
   return 0;
    
}

int Sum(struct Node *p)
{
    int sum = 0;
    while (p!=NULL)
    {
        sum = sum+p->data;
        p=p->next;
    }
    return sum;
}

int RSum(struct Node *p)
{
    int sum = 0;
    if (p!=NULL)
    {
        return RSum(p->next) + p->data;
    }
    else
        return 0;
    
    return sum;
}
int main()
{
    int A[] = {2, 4, 6, 8, 10};
    create(A, 5);
    
    printf("Length is %d \n", Count(first));
    printf("Recursively, Length is %d \n", RCount(first));

    printf("Sum is %d \n", Sum(first));
    printf("Recursively, Sum is %d \n", RSum(first));
    return 0;
}