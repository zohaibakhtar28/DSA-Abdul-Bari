#include<stdio.h>
#include<string.h>
int main()
{
    char name[50];
    printf("Enter Name\n");
    gets(name);

    int i;
    for(i=0;name[i]!= '\0'; i++)
    {
        if (name[i]>= 65 && name[i]<= 90)
        {
            name[i] += 32;
        }
        else if (name[i]>= 'a' && name[i]<= 122)
        {
            name[i]-= 32;
        }
        
        
    }

    puts(name);
return 0;
}