#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <windows.h>
#include <string.h>
#include <rlutil.h>
#include <llibreriaPropia.h>
#include <llibreriaExercici.h>
#include <stdbool.h>
#include <ctype.h>

int main()
{
	SetConsoleCP(850);
	SetConsoleOutputCP(850);
	srand(time(NULL));

	char Fichero[11];

	printf("Introdueix el nom del fitxer amb el que vols treballar: ");
	entrarCadena(Fichero, 11);

	FILE *f;
	f = fopen(Fichero, "r");
	if (f == NULL) printf("\nError obrint el fitxer");
	else
	{
		int opcio;
		int n = 0;

		pintaMenu();
		opcio = demanarNumRang(1, 2);

		switch (opcio)
		{
			case 1: comptarParaules(f, &n); break;
			case 2: comptarLletres(f, &n); break;
		}

		printf("\n\nProc‚s finalitzat");
		fclose(f);
	}

	acabament();
	return 0;
}