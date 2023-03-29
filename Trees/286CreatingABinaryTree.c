#include <stdio.h>
#include <stdlib.h>
#include "Queue.h"
struct Node *root = NULL;

void Create()
{
    struct Node *p, *t;
    int x;
    struct Queue q;
    CreateQ(&q, 100);
    printf("Enter Root Value\n");
    scanf("%d", &x);
    root = (struct Node *)malloc(sizeof(struct Node));
    root->data = x;
    root->lchild = root->rchild = NULL;
    enqueue(&q, root);
    while (!(isEmpty(q)))
    {
        p = dequeue(&q);
        printf("Enter LChild of %d\n", p->data);
        scanf("%d", &x);
        if (x!= -1)
        {
            t = (struct Node *)malloc(sizeof(struct Node));
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->lchild = t;
            enqueue(&q,t);

        }

        
        printf("Enter RChild of %d\n", p->data);
        scanf("%d", &x);
        if (x!= -1)
        {
            t = (struct Node *)malloc(sizeof(struct Node));
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->rchild = t;
            enqueue(&q,t);
            
        }
        
    }
}

void preorder(struct Node *p)
{
    if(p)
    {
        printf("%d\t", p->data);
        preorder(p->lchild);
        preorder(p->rchild);
    }
}
void inorder(struct Node *p)
{
    if(p)
    {
        inorder(p->lchild);
        printf("%d\t", p->data);
        inorder(p->rchild);
    }
}
void postorder(struct Node *p)
{
    if(p)
    {
        postorder(p->lchild);
        postorder(p->rchild);
        printf("%d\t", p->data);
    }
}
int main()
{

    Create();
    preorder(root);

    return 0;
}