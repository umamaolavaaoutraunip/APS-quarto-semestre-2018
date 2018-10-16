#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

#define TAM 100000

void preenche(int *vetor)
{
int i;
  for(i = 0; i < TAM; i++ ) 
  {
    vetor[i]=rand()%501;
	printf("%d\t",vetor[i]);
  }
}

int selecao (int *vetor)
{
int i,j,min,aux,trocas=0;
for( i = 0; i < TAM-1; i++ )
{
min = i;
for( j = i + 1; j < TAM; j++ ) 
    {
      		if ( vetor[j] < vetor[min] )
      		{
         		min = j;
			}
    }
	aux=vetor[i];
	vetor[i]=vetor[min];
	vetor[min]=aux;
	trocas++;
}	 
return trocas;	  
}

void mostra(int *vetor)
{
int i;
  for( i = 0; i < TAM; i++ )
  {
    printf("%d\t",vetor[i]); 
  }  
}

main()
{
 
int vetor[TAM];
int inicio, fim, tempo, troca;
 preenche(vetor);
 inicio = GetTickCount(); 	
 troca = selecao(vetor);
 fim=GetTickCount(); 
 tempo = fim - inicio;
 printf("Tempo de ordenacao : %d milisegundos\n",tempo);
 printf("Numero de trocas : %d trocas\n",troca);
 system("pause");
 printf("Vetor ordenado:\n");
 system("pause");
 mostra(vetor);	 
 system("pause");
}
