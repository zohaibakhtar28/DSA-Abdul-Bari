#include <stdio.h>

int fib(int n)
{
    int sum = 0, t0 = 0, t1 = 1;
    if (n <= 1)
    {
        return n;
    }

    for (int i = 0; i <= n; i++)
    {
        sum = t0 + t1;
        t0 = t1;
        t1 = sum;
    }
    return sum;
}

int main()

{
    int num;
    printf("Enter Term No.\n");
    scanf("%d", &num);
    printf("%d \n", fib(num));
    return 0;
}