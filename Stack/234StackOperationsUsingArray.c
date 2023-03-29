#include <stdio.h>
#include <stdlib.h>

struct Stack
{
    int size;
    int top;
    int *s;
};

void Create(struct Stack *st)
{
    printf("Enter Size\n");
    scanf("%d", &st->size);
    st->top = -1;
    st->s = (struct Stack *)malloc(st->size * sizeof(int));
}

void Display(struct Stack st)
{
    for (int i = st.top; i >= 0; i--)
    {
        printf("%d ", st.s[i]);
    }
}

void push(struct Stack *st, int x)
{
    if (st->top == st->size - 1)
    {
        printf("Stack Overflow\n");
    }
    else
    {
        st->top++;
        st->s[st->top] = x;
    }
}

int pop(struct Stack *st)
{
    int x = -1;
    if (st->top == -1)
    {
        printf("Stack Underflow\n");
    }
    else
    {
        x = st->s[st->top];
        st->top--;
        return x;
    }
}

int peek(struct Stack st, int index)
{
    int x = -1;
    if (st.top - index + 1 < 0)
        printf("Invalid Index \n");
    x = st.s[st.top - index + 1];

    return x;
}
int isEmpty(struct Stack st)
{
    if (st.top == -1)
        return 1;
    return 0;
}
int isFull(struct Stack st)
{
    return st.top == st.size - 1;
}
int stackTop(struct Stack st)
{
    if (!isEmpty(st))
        return st.s[st.top];
    return -1;
}
int main()
{
    struct Stack st;
    Create(&st);

    push(&st, 10);
    push(&st, 20);
    push(&st, 30);
    push(&st, 40);
    push(&st, 50);
    push(&st, 60);

    Display(st);
}