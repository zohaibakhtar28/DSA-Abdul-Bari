#include<stdio.h>
#include<strings.h>
int main()
{
    char A[] = "finding";
    int H = 0;
    int x = 0;
    int i;
    for(i = 0; A[i]!= '\0'; i++)
    {
        x = 1;
        x = x<<(A[i]-97);
        if((H&x)>0)
        {
            printf("%c is Duplicate\n", A[i]);
        }
        else
        {
            H = H|x;
        }
    }
return 0;
}