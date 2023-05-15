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
    //No he podido hacerlo como se deb¡a hacer

    char palabra[20];
    char caracteres[] = ". ,;)";

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
        removerCaracteres(palabras[i], caracteres);
		i++;
	}

    printf("\nLas palabras son: ");
    for (i = 0; i < *n; i++) printf("\n%02d- %s", i + 1, palabras[i]);
}

void comptarLletres(FILE f[])
{
    int i;
    int contA = 0, contB = 0, contC = 0, contD = 0, contE = 0, contF = 0, contG = 0, contH = 0, contI = 0, contJ = 0, contK = 0, contL = 0;
    int contM = 0, contN = 0, contO = 0, contP = 0, contQ = 0, contR = 0, contS = 0, contT = 0, contU = 0, contV = 0, contW = 0;
    int contX = 0, contY = 0, contZ = 0;

    char letra;

    while (!feof(f))
	{
		fscanf(f, "%c", &letra);
        fflush(stdin);

        if (letra == 'a' || letra == 'A') contA++;
        else if (letra == 'b' || letra == 'B') contB++;
        else if (letra == 'c' || letra == 'C') contC++;
        else if (letra == 'd' || letra == 'D') contD++;
        else if (letra == 'e' || letra == 'E') contE++;
        else if (letra == 'f' || letra == 'F') contF++;
        else if (letra == 'g' || letra == 'G') contG++;
        else if (letra == 'h' || letra == 'H') contH++;
        else if (letra == 'i' || letra == 'I') contI++;
        else if (letra == 'j' || letra == 'J') contJ++;
        else if (letra == 'k' || letra == 'K') contK++;
        else if (letra == 'l' || letra == 'L') contL++;
        else if (letra == 'm' || letra == 'M') contM++;
        else if (letra == 'n' || letra == 'N') contE++;
        else if (letra == 'o' || letra == 'O') contO++;
        else if (letra == 'p' || letra == 'P') contP++;
        else if (letra == 'q' || letra == 'Q') contQ++;
        else if (letra == 'r' || letra == 'R') contR++;
        else if (letra == 's' || letra == 'S') contS++;
        else if (letra == 't' || letra == 'T') contT++;
        else if (letra == 'u' || letra == 'U') contU++;
        else if (letra == 'v' || letra == 'V') contV++;
        else if (letra == 'w' || letra == 'W') contW++;
        else if (letra == 'x' || letra == 'X') contX++;
        else if (letra == 'y' || letra == 'Y') contY++;
        else if (letra == 'z' || letra == 'Z') contZ++;

		i++;
	}

    printf("\nLletra A: %d", contA);
    printf("\nLletra B: %d", contB);
    printf("\nLletra C: %d", contC);
    printf("\nLletra D: %d", contD);
    printf("\nLletra E: %d", contE);
    printf("\nLletra F: %d", contF);
    printf("\nLletra G: %d", contG);
    printf("\nLletra H: %d", contH);
    printf("\nLletra I: %d", contI);
    printf("\nLletra J: %d", contJ);
    printf("\nLletra K: %d", contK);
    printf("\nLletra L: %d", contL);
    printf("\nLletra M: %d", contM);
    printf("\nLletra N: %d", contN);
    printf("\nLletra O: %d", contO);
    printf("\nLletra P: %d", contP);
    printf("\nLletra Q: %d", contQ);
    printf("\nLletra R: %d", contR);
    printf("\nLletra S: %d", contS);
    printf("\nLletra T: %d", contT);
    printf("\nLletra U: %d", contU);
    printf("\nLletra V: %d", contV);
    printf("\nLletra W: %d", contW);
    printf("\nLletra X: %d", contX);
    printf("\nLletra Y: %d", contY);
    printf("\nLletra Z: %d", contZ);
}

void removerCaracteres(char cadena[], char caracteres[])
{
  int indiceCadena = 0, indiceCadenaLimpia = 0;
  int deberiaAgregarCaracter = 1;
  // Recorrer cadena car cter por car cter
  while (cadena[indiceCadena]) {
    // Primero suponemos que la letra s¡ debe permanecer
    deberiaAgregarCaracter = 1;
    int indiceCaracteres = 0;
    // Recorrer los caracteres prohibidos
    while (caracteres[indiceCaracteres]) {
      // Y si la letra actual es uno de los caracteres, ya no se agrega
      if (cadena[indiceCadena] == caracteres[indiceCaracteres]) {
        deberiaAgregarCaracter = 0;
      }
      indiceCaracteres++;
    }
    // Dependiendo de la variable de arriba, la letra se agrega a la "nueva
    // cadena"
    if (deberiaAgregarCaracter) {
      cadena[indiceCadenaLimpia] = cadena[indiceCadena];
      indiceCadenaLimpia++;
    }
    indiceCadena++;
  }
  // Al final se agrega el car cter NULL para terminar la cadena
  cadena[indiceCadenaLimpia] = 0;
}