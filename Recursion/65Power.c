#include<stdio.h>
int pow(int m, int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
        return pow(m, n-1) *m;
    
}
int main()
{
int p = pow(2,3);
printf("ANS : %d", p);
return 0;
}