/* Cwiczenie_6.c - Napisz program, ktory inicjalizuje tablice dwuwymiarowa i kopiuje ja do innej
tablicy dwuwymiarowej, korzystajac z jednej z funkcji z cwiczenia 2. (Poniewaz
tablica dwuwymiarowa jest tablica tablic, jednowymiarowa funkcja kopiujaca
moze byc stosowana do poszczegolnych podtablic).*/

#include <stdio.h>
void kopiuj_wsk(double tab[], double cel[], int rozmiar);

void main(void)
{
    // Definiowanie zmiennych
    double zrodlo[2][3] = {{1.1, 2.2, 3.3},
                        {4.4, 5.5, 6.6}};
    double cel[2][3];
    int i, k;
    for (i = 0; i < 2; i++)
    {
        kopiuj_wsk(zrodlo[i], cel[i], 3);
    }

    for (i = 0; i < 2; i++)
    {
        for (k = 0; k < 3; k++)
        {
            printf("%.1lf ", cel[i][k]);
        }
        printf("\n");
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
