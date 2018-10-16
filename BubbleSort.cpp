#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>
#define TAM 1000

// FUNÇÃO PREENCHE
void preenche (int *vetor)
{
	int i;
	for (i = 0; i < TAM; i++)
	{
		vetor[i] = rand()%500;
		printf ("%d \t", vetor[i]);
	}	
}

int bolha (int *vetor)
{
	int i, j, aux, troca;
	for (i = 0; i< TAM; i++)
	{
		for (j = i + 1; j < TAM; j++)
		{
			if (vetor [i] > vetor [j])
			{
				aux = vetor [i];
				vetor [i] = vetor [j];
				vetor [j] = aux;
				troca++;
			}
		}
	}
	return troca;
}

void mostra (int *vetor)
{
	int i;
	for (i = 0; i < TAM; i++)
	{
		printf ("%d \t", vetor[i]);
	}
}

main ()
{
	int vetor [TAM], inicio, fim, tempo, trocs;
	preenche (vetor);
	inicio = GetTickCount();
	trocs = bolha(vetor);
	fim = GetTickCount();
	tempo = fim - inicio;
	printf ("\n Tempo de ordenacao: %d milisegundos", tempo);
	printf ("\n Numero de trocas realizadas: \n %d", trocs);
	system ("pause");
	printf ("\n Vetor ordenado: \n");
	system("pause");
	mostra (vetor);
	system ("pause");
}
