/*Cwiczenie_10.c - Napisz program, ktory prosi uzytkownika o podanie trzech zbiorow skladajacych
sie z pieciu liczb typu double, a nastepnie:
a) Zapisuje te dane w tablicy o wymiarach 3 na 5.
b) Oblicza srednia dla kazdego zbioru z osobna.
c) Oblicza srednia dla wszystkich wartosci.
d) Znajduje najwieksza sposrod 15 wartosci.
e) Wyswietla wyniki.*/

#include <stdio.h>

double srednia_wiersz(double tab[], int rozmiar);
double srednia_tabela(double tab[][5], int wiersz, int kolumna);
double max_tabela(double tab[][5], int wiersz, int kolumna);
void zapisz(double tab[][5], int wiersz, int kolumna);
void wyswietlacz_wynikow(double tab[][5], int wiersz, int kolumna);

void main(void)
{
    double tab[3][5];

    zapisz(tab, 3, 5);

    wyswietlacz_wynikow(tab, 3, 5);
}

void zapisz(double tab[][5], int wiersz, int kolumna)
{
    for (int i=0; i<wiersz; i++)
    {
        printf("Wiersz nr %d\n", i+1);
        for (int k=0; k<kolumna; k++)
        {
            printf("Podaj liczbe typu double: ");
            scanf("%lf", &tab[i][k]);
        }
    }
}

double srednia_wiersz(double tab[], int kolumna)
{
    int i;
    double suma;

    for (i=0, suma = 0; i<kolumna; i++)
    {
        suma += tab[i];
    }
    return suma/5;
}

double srednia_tabela(double tab[][5], int wiersz, int kolumna)
{
    int i,k;
    double suma;

    for (i=0, suma = 0; i<wiersz; i++)
    {
        for (k=0; k<kolumna; k++)
        {
            suma += tab[i][k];
        }
    }

    return suma/15;
}

double max_tabela(double tab[][5], int wiersz, int kolumna)
{
    int i,k;
    double max;

    max = tab[0][0];

    for (i=0; i<wiersz; i++)
    {
        for (k=0; k<kolumna; k++)
        {
            if (tab[i][k] > max)
                max = tab[i][k];
        }
    }

    return max;
}

void wyswietlacz_wynikow(double tab[][5], int wiersz, int kolumna)
{
    printf("\nSrednia dla kazdego z elementow:\n");
    for (int i=0; i < 3; i++)
    {
        printf("\tSrednia dla %d wiersza wynosi: %lf\n", i+1, srednia_wiersz(tab[i], 5));
    }

    printf("\n\nSrednia dla calej tabeli wynosi: %lf\n", srednia_tabela(tab, 3, 5));

    printf("\n\nMaksymalna wartosc dla calej tabeli wynosi: %lf\n", max_tabela(tab, 3, 5));
}
