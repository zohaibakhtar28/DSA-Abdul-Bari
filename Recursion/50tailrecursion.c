#include<stdio.h>
void fun(int n)
{
    if (n>0)
    {
        /* code */
        printf("%d ",n);
        fun(n-1);
    }
    
}
int main(int argc, char const *argv[])
{
    int x = 3;
    fun(x);
    return 0;
}
