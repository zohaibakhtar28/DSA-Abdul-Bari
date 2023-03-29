#include<stdio.h>
void fun(int n)
{
    if (n>0)
    {
        /* code */
        fun(n-1);
        printf("%d ",n);
    }
    
}
int main(int argc, char const *argv[])
{
    int x = 3;
    fun(x);
    return 0;
}
