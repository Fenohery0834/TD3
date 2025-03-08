#include<stdio.h>
#include<string.h>

int main()
{
    char N[50];
    int g,d,palindrome=1;
    
    printf("Veuillez entrer une chaîne de caractère: ");
    scanf("%s", N);
    
    d=strlen(N)-1;
    for(g=0; g<d; g++,d--)
    {
        if(N[g]!=N[d])
        {
            palindrome=0;
            break;
        }
    }
    if(palindrome)
    {
        printf("Le chaîne de caractères est palindrome.\n");
    }
    else
    {
        printf("Le chaîne de caractères n'est pas palindrome.\n");
    }
    return(0);
}