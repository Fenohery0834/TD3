#include<stdio.h>
#include<string.h>

int main()
{
    char N[50];
    char bigramme[3];
    int compteur=0,i,longeur; 

    printf("Veuillez entrer une chaine de caractere:\n");
    scanf("%s", N);

    printf("Veuillez entrer le bigramme a rechercher(2letrres): ");
    scanf("%2s", bigramme);

    longeur=strlen(N);

    for(i=0; i<longeur-1; i++)
    {
        if(N[i]==bigramme[0] && N[i+1]==bigramme[1])
        compteur++;
    }

    printf("Le bigramme \"%s\" apparait %d fois dans le chaine.\n", bigramme , compteur);

    return(0);

}