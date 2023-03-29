#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char A[] = "observer";
    char B[] = "serverbo";
    int H[26] = {0};
    for ( i = 0; A[i]!= '\0'; i++)
    {
        H[A[i] - 97] += 1;
    }
    for ( i = 0; B[i]!= '\0'; i++)
    {
        H[B[i] - 97] -= 1;
        if (B[i]<0)
        {
            printf("Not Anagram\n");
            break;
        }
        
    }

    if (B[i]=='\0')
    {
        printf("Anagram\n");
    }
    
    
return 0;
}