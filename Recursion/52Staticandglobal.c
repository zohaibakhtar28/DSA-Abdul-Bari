#include<stdio.h>
int fun (int n)
{
    static int x = 0;
    if (n>0)
    {
        x++;
        return fun(n-1) + x;
    }
    
    
}

int fun1(int n)
{
    // int x = 0;
    if (n>0)
    {
        return(n-1) + n;
    }
    
}
int main(int argc, char const *argv[])
{
    int r = 5;
    // r = fun(5);
    printf("%d\n",fun(r));

    int a = 5;
    printf("%d\n", fun1(5));
    return 0;
}
