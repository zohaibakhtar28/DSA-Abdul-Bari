// Increase Size of an Array in heap.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *p;
    p = (int *)malloc(5 * sizeof(int));

    for (int i = 0; i < 5; i++)
    {
        p[i] = i;
    }

    int *q;
    q = (int *)malloc(10 * sizeof(int));

    for (int i = 0; i < 5; i++)
    {
        q[i] = p[i];
    }

    free(p);
    p = q;
    q = NULL;

    return 0;
}