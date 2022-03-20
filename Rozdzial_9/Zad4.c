// Średnią harmoniczną dwóch liczb uzyskujemy przez znalezenie odwrotności danych liczb,
// wyciąganięciu z nich średniej arytmetycznej i obliczenie odwrotności otrzymanego
// wyniku. Napisz funkcję, która pobiera dwa argumenty typu double i zwraca ich średnią harmoniczną.

#include<stdio.h>
double srednia_arytmetyczna(double liczba1, double liczba2)
{
    return (liczba1 + liczba2)/2;
}

double odwrotnosc_liczby(double liczba)
{
    return 1/liczba;
}

double srednia_harmoniczna(double liczba1, double liczba2)
{
    float x, y, srednia;
    x = odwrotnosc_liczby(liczba1);
    y = odwrotnosc_liczby(liczba2);
    srednia = srednia_arytmetyczna(x, y);

    return odwrotnosc_liczby(srednia);

}

void main(void)
{
    double liczba1 = 2.2, liczba2 = 3.3;

    printf("Dla liczb: %lf i %lf ich srednia harmoniczna wynosi: %lf", liczba1, liczba2, srednia_harmoniczna(liczba1, liczba2));
}