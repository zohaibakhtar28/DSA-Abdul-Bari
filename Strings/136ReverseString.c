#include<stdio.h>
#include<string.h>
int main()
{
    char name[] = "python";
    int i,j;
    char temp;
    
    j = strlen(name) - 1;
    for ( i = 0; i < j; i++,j--)
    {
        temp = name[i];
        name[i] = name[j];
        name[j] = temp;
    }

    puts(name);
    

return 0;
}