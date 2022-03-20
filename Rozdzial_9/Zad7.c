// Ponownie wykonaj ćwiczenie 6 - tym razem użyj funkcji rekurencyjnej

/* potega.c -- podnosi liczby do poteg naturalnych */
#include <stdio.h>
double potega(double a, int b); /* prototyp ANSI */

int main(void)
{
    double x, xpot;
    int n;

    printf("Podaj liczbe oraz potege naturalna,");
    printf(" do ktorej podniesiona\nzostanie liczba. Wpisz q,");
    printf(" aby zakonczyc program.\n");
    while (scanf("%lf%d", &x, &n) == 2)
    {
        xpot = potega(x,n); /* wywolanie funkcji */
        printf("%.3g do potegi %d to %.5g\n", x, n, xpot);
        printf("Podaj kolejna pare liczb lub wpisz q, aby zakonczyc.\n");
    }
    printf("Zycze milego dnia!\n");
    return 0;
}

double potega(double a, int b) /* definicja funkcji */
{
    double pot = 1;
    int i;
    if (a == 0)
    {
        return 0;
    }
    if (b == 0)
    {
        return 1;
    }
    pot = a * potega(a, b - 1);
    if (b < 0)
    {
        pot = 1 / pot;
    }

    return pot; /* zwrot wartosci pot */
}
