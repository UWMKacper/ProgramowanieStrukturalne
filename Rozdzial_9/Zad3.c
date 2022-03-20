// Napisz funkcję, która pobiera trzy argumenty: znak oraz dwie liczby całkowite.
// Pierwsza liczba określa liczbę razy, jaką należy wyświetlić znak w jednym wierszu;
// druga liczba określa liczbę wierszy. Napisz program, który wykorzystuje tę funkcję.

#include<stdio.h>

void funkcja(char znak, int powt, int wiersze)
{
    for(int i=0; i < wiersze; i++)
    {
        for(int k=0; k < powt; k++)
            {
                putchar(znak);
            }
        putchar('\n');
    }
}

void main(void)
{
    char zn = 'a';
    int licz1 = 2, licz2 = 3;

    funkcja(zn, licz1, licz2);
}