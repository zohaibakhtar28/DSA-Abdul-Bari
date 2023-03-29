#include<stdio.h>
#include<string.h>
int main()
{
    char string[100];
    printf("Enter String\n");
    gets(string);

    int vcount = 0;
    int ccount = 0;
    int wcount = 0;

    for(int i =0; string[i]!= '\0';i++)
    {
        if(string[i] == 'A' || string[i] == 'E' ||string[i] == 'I' || string[i] == 'O' || string[i] == 'U' || string[i] == 'a'|| string[i] == 'e'|| string[i] == 'i'|| string[i] == 'o'|| string[i] == 'u')
        {
            vcount+=1;
        }
        else if (string[i]>= 65 && string[i]<=122)
        {
            ccount+=1;
        }
    }

    int j;
    for ( j = 0; string[j]!= '\0'; j++)
    {
        if(string[j] == ' ' && string[j-1] != ' ')
        {
            wcount+= 1;
        }
    }

    printf("Vowel Count :%d\n", vcount);
    printf("Consonant Count :%d\n",ccount);
    printf("Word Count :%d\n",++wcount);
    

    return 0;
} 