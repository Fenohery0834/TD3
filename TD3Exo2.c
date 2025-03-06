#include<stdio.h>
#include<stdlib.h>

int main()
{
    int N,i;
    int T[50],T1[50];
    int tentative=0;
    char choix;
    int X,j,k;
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
    
    j=0;
    for(i=0;i<N;i++)
    {
        if(T[i]%2==0)
        {
            T1[j++]=T[i];
        }
    }
    for(i=0;i<N;i++)
    {
         if(T[i]%2!=0)
         {
             T1[j++]=T[i];
         }   
    }
   
    for(i=0;i<N;i++)
    {
        T[i]=T1[i];
    }
    printf("Tableau après réorganisation : \n");
   for(i=0;i<N;i++)
   {
       printf("%4d", T[i]);
   }
   printf("\n");
   
   printf("voulez vous insérer un nombre?(O-oui et N-non): ");
   scanf(" %c",&choix);
       
   if(choix != 'O' && choix != 'o')
   {
      printf("programme s'arrete");
      exit(0);
   }
   printf("Entrez le nombre que vous voulez insérer: \n");
   scanf("%d", &X);
   
   for(i=0; i<N; i++)
   {
      if(T[i]>X)
      {
          break;
      }    
   }
   for(k=N; k>i; k--)
   {
       T[k]=T[k-1];
   }
   T[i]=X;
   N++;
       
   printf("Tableau après insertion: ");
   for(i=0; i<N; i++)
   {
       printf("%4d", T[i]);
   }
   printf("\n");
    
   return(0);
}  