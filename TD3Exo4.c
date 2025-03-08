#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int N,M,i;
    int T1[50],T2[100];
    int tentative=0;
    int j,k;
    
    do 
    {
        if(tentative==3)
        {
        printf("nombre de tentative depasse:\n ");
        exit(0);
        }
        printf("Entrer la taille du tableau T1:");
        scanf("%d", &N);
        printf("Entrer la taille du tableau T2: ");
        scanf("%d", &M);
        if((N<1 || N>50) || (M<1 || M>100))
        {
            printf("Erreur: Veuillez réessayer \n");
            tentative++;
        }
    }
    while((N<1 || N>50) || (M<1 || M>100));
    printf("Veuillez entrer les éléments du tableau T1:\n");
    for(i=0; i<N; i++)
    {
        printf("T[%d]= ", i);
        scanf("%4d", &T1[i]);
    }
    printf("Veuillez entrer les éléments du tableau T2:\n");
    for(i=0; i<M; i++)
    {
        printf("T[%d]= ", i);
        scanf("%4d", &T2[i]);
    }
    for(i=0; i<M; i++)
    {
        for(j=0; j<N; j++)
        {
            if(T1[j]==T2[i]) 
            {
                for(k=j; k<N-1; k++)
                {
                    T1[k]=T1[k+1];
                }
                N--;
                j--;
            }
        }
    }
    printf("T1 après supression de T2:\n");
    for(i=0; i<N; i++)
    {
         printf("%4d", T1[i]);
    }
    printf("\n");
    
    return(0);
}