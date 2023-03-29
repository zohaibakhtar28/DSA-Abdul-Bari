#include <stdio.h>
#include <stdlib.h>

struct Matrix
{
    int n;
    int *A;
};

void set(struct Matrix *m, int i, int j, int x)
// row,col,element to be set
{
    if (i >= j)
    {
        m->A[m->n*(j-1)+(j-2)*(j-1)/2 + i - j] = x;
    }
}
int get(struct Matrix m, int i, int j)
{
    if (i >= j)
    {
        return m.A[m.n*(j-1)+(j-2)*(j-1)/2 + i - j];
    }
    else
        return 0;
}

void Display(struct Matrix m)
{
    for (int i = 1; i <= m.n; i++)
    {
        for (int j = 1; j <= m.n; j++)
        {
            if (i >= j)
            {
                printf("%d ", m.A[m.n*(j-1)+(j-2)*(j-1)/2 + i - j]);
            }
            else
                printf("0 ");
        }
        printf("\n");
    }
}
int main()
{
    struct Matrix m;
    printf("Enter Dimension\n");
    scanf("%d", &m.n);
    m.A = (int *)malloc(m.n * (m.n + 1) / 2 * sizeof(int));
    // Allocated size for number of non zero elements.
    printf("Enter All Elements\n");
    int i, j, x;
    for (i = 1; i <= m.n; i++)
    {
        for (j = 1; j <= m.n; j++)
        {
            scanf("%d", &x);
            set(&m, i, j, x);
        }
    }
    printf("\n\n");

    Display(m);
    return 0;
}