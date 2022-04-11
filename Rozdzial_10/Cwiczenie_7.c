/* Cwiczenie_7.c - Uzyj funkcji kopiujacej z cwiczenia 2 do skopiowania od trzeciego do piatego elementu
siedmioelementowej tablicy. Elementy powinny zostac umieszczone w tablicy
trzyelementowej. Sama funkcja nie musi byc modyfikowana; wystarczy dobrac
odpowiednie argumenty faktyczne. (Argumentami nie musza być nazwa tablicy i jej
rozmiar — rownie dobrze przekazac mozna adres jednego z elementow oraz liczbe
elementow do skopiowania). */

#include <stdio.h>

void kopiuj_wsk(double tab[], double cel[], int rozmiar);

void main(void)
{
    // Definiowanie zmiennych
    double zrodlo[7] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7};
    double cel[3];
    int i;

    kopiuj_wsk(zrodlo+2, cel, 3);

    for (i=0; i<3; i++)
        printf("%.1lf ", cel[i]);
}

void kopiuj_wsk(double tab[], double cel[], int rozmiar)
{
    int i;

    for (i = 0; i < rozmiar; i++)
    {
        *(cel+i) = *(tab+i);
    }
}
