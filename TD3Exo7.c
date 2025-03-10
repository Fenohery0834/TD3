#include<stdio.h>
#include<string.h>

int main()
{
    char M[50] ;
    int i , longueur ;
    int compteur_es= 0 , compteur_a= 0 ;
    printf("Veuillez entrer une chaine de caracteres: \n");
    gets(M); 

    longueur=strlen(M);

    for (i=0 ; i<longueur ;i++)
    {
        if ( M[i] == 'a')
        {
            compteur_a++ ;
        }
    }
    for (i=0 ; i<longueur ; i++) 
    {   
        if (M[i] == 'e' && M[i+1] == 's')
        {
            compteur_es ++;
        }
    }
    printf("les nombres d'apparition de a: %d \n",compteur_a);
    printf("les nombres d'apparition de es: %d \n",compteur_es);

    return(0);
}