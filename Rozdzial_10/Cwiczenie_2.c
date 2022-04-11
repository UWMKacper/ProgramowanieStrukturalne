/* Cwiczenie_2.c - Program ma zdefiniowane 3 tablice, z czego tylko jedna ma initializowane wartosci.
nastepnie zostana przypisane wartosci do tych dwoch pustych tablic za pomoca funkcji wykorzystujacej
notacje tablicowa, druga funkcja wykorzystuje zapis wskaznikowy i zwiekszenie wskaznikow. Te dwie
funkcje jako argumenty przyjmuja nazwe tablicy zrodlowej, nazwe tablicy docelowej oraz rozmiar tablicy.
Trzecia funkcja powinna pobierac nazwe tablicy zrodlowej, nazwe tablicy docelowej i wskaznik do
ostatniego elementu tablicy zrodlowej. */

#include <stdio.h>

void kopiuj_tab(double tab[], double cel[], int rozmiar);
void kopiuj_wsk(double tab[], double cel[], int rozmiar);
void kopiuj_wsk2(double tab[], double cel[], double super[]);
void tekst(double tab[]);

void main(void)
{
    // Definiowanie zmiennych
    double zrodlo[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double cel_1[5];
    double cel_2[5];
    double cel_3[5];

    // Przypisywanie wartosci do poszczegolnych tabel
    kopiuj_tab(zrodlo, cel_1, 5);
    kopiuj_wsk(zrodlo, cel_2, 5);
    kopiuj_wsk2(zrodlo, cel_3, zrodlo + 5);

    // Wyswietlenie wynikow
    tekst(cel_1);
    tekst(cel_2);
    tekst(cel_3);

}

void kopiuj_tab(double tab[], double cel[], int rozmiar)
{
    int i;

    for (i = 0; i < rozmiar; i++)
    {
        cel[i] = tab[i];
    }
}

void kopiuj_wsk(double tab[], double cel[], int rozmiar)
{
    int i;

    for (i = 0; i < rozmiar; i++)
    {
        *(cel+i) = *(tab+i);
    }
}

void kopiuj_wsk2(double tab[], double cel[], double super[])
{
    int i;
    double * k;

    for (k = tab, i = 0; k < super; k++, i++)
    {
        *(cel + i) = *(tab + i);
    }
}

void tekst(double tab[])
{
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%lf ", tab[i]);
    }
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
}
