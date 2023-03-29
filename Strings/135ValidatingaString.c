#include<stdio.h>
#include<string.h>
int validate(char *string)
{
    for (int i = 0; string[i]!= '\0'  ; i++)
    {
        if(!(string[i] >= 65 && string[i]<= 90 ) && !(string[i] >= 97 && string[i]<= 122 ) && !(string[i] >= 48 && string[i]<= 57 ))
        {
            return 0;
        }
    }
    return 1;
    
}
int main()
{
    char name[50];
    printf("Enter String\n");
    gets(name);

    if(validate(name))
    {
        printf("Valid\n");
    }
    else
    {
        printf("Invalid\n");
    }
return 0;
}