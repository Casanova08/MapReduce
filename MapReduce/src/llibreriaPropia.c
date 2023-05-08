#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include "rlutil.h"
#include "llibreriaPropia.h"
#include "llibreriaExercici.h"

void acabament(void)
{
	printf("\n\nPrem una tecla per finalitzar");
	getch();
}

int demanarNum(void)
{
	int num;
	scanf("%d", &num);
	return num;
}

int demanarNumRang(int min, int max)
{

	if (min > max)
	{
		int aux;
		aux = min;
		min = max;
		max = aux;
	}

	int num;
	do
	{
		scanf("%d", &num);
		if (num < min || num > max)
		{
			printf("\nValor incorrecte");
			printf("Introdueix un valor entre el rang [%d - %d]: ", min, max);
		}

	} while (num < min || num > max);

	return num;
}

int numAleatoriRang(int min, int max)
{

	if (min > max)
	{
		int aux;
		aux = min;
		min = max;
		max = aux;
	}

	int num;
	do
	{
		num = rand() % (max - min + 1) + min;
	} while (num < min || num > max);

	return num;
}

int demanarNumPositiu(void)
{
	int num;
	scanf("%d", &num);
	while (num < 0)
	{
		printf("El n£mero no ‚s positiu.\n");
		printf("Introdueix un numero positiu: ");
		scanf("%d", &num);
	}

	return num;
}

char demanarChar(void)
{
	char car;
	fflush(stdin);
	scanf("%c", &car);
	fflush(stdin);
	return car;
}

void pintaVector(int v[], int qtt)
{
	for (int i = 0; i < qtt; i++)
	{
		printf("\nv[%d]: %d", i, v[i]);
	}
}

void inicialitzarVector(int v[], int qtt)
{
    for (int i = 0; i < qtt; i++)
    {
        v[i] = numAleatoriRang(1, 10);
    }
}

void entrarCadena(char cad[], int qttCaracters)
{
	fflush(stdin);
	fgets(cad, qttCaracters, stdin);
	if (cad[strlen(cad) - 1] == '\n') cad[strlen(cad) - 1] = '\0';
}