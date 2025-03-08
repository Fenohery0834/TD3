#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main ()
{
    int N, somme=0,i;
    int T[50];
    int tentative=0;
    int moyenne,plus_proche;
    
    do 
    {
        if(tentative==3)
        {
        printf("nombre de tentative depasse:\n ");
        exit(0);
        }
        printf("Entrer la taille du tableau T:");
        scanf("%d", &N);
        if(N<1 || N>50)
        {
            printf("Erreur: Veuillez réessayer \n");
            tentative++;
        }
    }
    while(N<1 || N>50);
    printf("Veuillez entrer les éléments du tableau T:\n");
    for(i=0; i<N; i++)
    {
        printf("T[%d]= ", i);
        scanf("%4d", &T[i]);
        somme +=T[i];
    }
    moyenne = somme/N;
    plus_proche=T[0];
    for(i=0; i<N; i++)
    {
         if(abs(T[i]-moyenne)<abs(plus_proche-moyenne))
         {
             plus_proche=T[i];
         }   
    }
    printf("\n");
    
    printf("Le nombre le plus proche de la moyenne %d est:%d\n", moyenne,plus_proche);
    
    return(0);
}