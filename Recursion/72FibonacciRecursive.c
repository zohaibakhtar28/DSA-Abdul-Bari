#include <stdio.h>

int fib(int n)
{
    if (n<=1 )
    return n;
    return fib(n-2) + fib(n-1);
    
}

int main()

{
    int num;
    printf("Enter Term No.\n");
    scanf("%d", &num);
    printf("%d \n", fib(num));
    return 0;
}