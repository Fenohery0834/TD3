#include<stdio.h>
#include<string.h>

int main()
{
    char W[50];
    int i,longeur;
    int carrée=0;

    printf("Veuillez entrer une chaine de caractère:\n");
    scanf("%s", W);

    longeur=strlen(W);

    if(longeur % 2 != 0)
    {
        printf("La chaine n'est pas un carré.\n");
        return(0);
    }

    for(i=0; i<longeur/2; i++)
    {
        if(W[i]!=W[i+longeur/2])
        {
            printf("La chaine n'est pas un carrée.\n");
            return(0);
            break;
        }

    }

    printf("la chaine est un carrée.\n");

    return(0);

}