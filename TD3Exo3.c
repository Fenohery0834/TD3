#include<stdio.h>
#include<stdlib.h>

int main()
{
    int N,i;
    int T[50];
    int tentative=0;
    char choix;
    int X,j;
    do
    {
        if(tentative==2)
        {
            printf("Nombre de tentative depasse \n");
            exit(0);
        }
        printf("Entrer la taille du tableau: ");
        scanf("%d", &N);
        if(N<1 || N>50)
        {
            printf("Erreur: Taille invalide \n");
            tentative++;
        }
    }
    while(N<1 || N>50);
    printf("Entrer les elements du tableau:  \n");
    for(i=0; i<N; i++)
    {
       printf("T[%d]=", i);
       scanf("%d", &T[i]);
    }
    printf("\n");
   
   printf("voulez vous supprimer un nombre?(O-oui et N-non): ");
   scanf(" %c",&choix);
       
   if(choix != 'O' && choix != 'o')
   {
      printf("programme s'arrete");
      exit(0);
   }
   printf("Entrez le nombre que vous voulez supprimer: \n");
   scanf("%d", &X);
   
   for(i=0; i<N; i++)
   {
       if(T[i]==X)
       {
           for(j=i; j<N-1; j++)
           {
               T[j]=T[j+1];
           }
           N--;
           i--;
       }
       
   }
       
   printf("Tableau après supression: ");
   for(i=0; i<N; i++)
   {
       printf("%4d", T[i]);
   }
   printf("\n");
    
   return(0);
}  