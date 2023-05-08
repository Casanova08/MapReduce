#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
#include "rlutil.h"
#include "llibreriaPropia.h"
#include "llibreriaExercici.h"

void pintaMenu(void)
{
    printf("\nIntrodueix el mode amb el que vols treballar");
    printf("\n1. Comptar paraules");
    printf("\n2. Comptar lletres");
    printf("\n\nEscull una opcio: ");
}

void comptarParaules(FILE f[], int *n)
{
    char palabra[20];

    while (!feof(f))
    {
        fscanf(f, "%s", palabra);
        (*n)++;
    }

    printf("\nEl numero de palabras es %d", *n);

    rewind(f);

    char palabras[*n][50];
	int i = 0;
		
	while (!feof(f))
	{
		fscanf(f, "%s", palabras[i]);
        // Quitarle la coma a las palabras
		i++;
	}

    printf("\nLas palabras son: ");
    for (i = 0; i < *n; i++) printf("\n%02d- %s", i + 1, palabras[i]);
}

void comptarLletres(FILE f[], int *n)
{

}