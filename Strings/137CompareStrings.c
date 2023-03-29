#include<stdio.h>
#include<string.h>
int main()
{
    char A[] = "painter";
    char B[] = "painting";
    int i,j;
    for ( i = 0,j=0; A[i]!= '\0' && B[j]!= '\0'; i++,j++)
    {
    
        if (A[i]!= B[j])
        {
            break;
        }
        
        
    }

    if(A[i] == B[j])
    {
        printf("Equal\n");
    }
    else if (A[i]<B[j])
    {
        printf("String A is smaller\n");
    }
    else
    {
        printf("String A is greater\n");
    }
    
    
    
return 0;
}