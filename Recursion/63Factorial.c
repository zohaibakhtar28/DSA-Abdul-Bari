#include<stdio.h>
int fact(int n)
{
    if (n==0)
    {
        return 1;
    }
    else
        return fact(n-1)*n;
    
}
int main()
{
int f = fact(5);
printf("Factorial is : %d", f);
return 0;
}