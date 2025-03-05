#include<stdio.h>
#include<stdlib.h>

int main()
{
    int N,i;
    int T[50];
    int tentative=0;
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
    printf("Entrer les elements du tableau:  ");
    for(i=0; i<N; i++)
    {
       printf("T[%d]=", i);
       scanf("%d", &T[i]);
    }
    
    int j=0;
    int T1[50];
    
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
    printf("Tableau après réorganisation : ");
   for(i=0;i<N;i++)
   {
       printf("%d", T[i]);
   }
   printf("\n");
    
   return(0);
}  