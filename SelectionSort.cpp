#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>
#define TAM 10000

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

// FUNÇÃO SELECTION
int selecao (int *vetor)
{
	int i, j, aux, min, trocas = 0;
	for (i = 0; i< TAM - 1; i++)
	{
		min = i;
		for (j = i + 1; j < TAM; j++)
		{
			if (vetor [j] < vetor [min])
			{
				min = j;
			}
		}
		aux = vetor [i];
		vetor [i] = vetor [min];
		vetor [min] = aux;
		trocas++;
	}
}

//FUNÇÃO PARA MOSTRAR O VETOR
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
	trocs = selecao(vetor);
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

