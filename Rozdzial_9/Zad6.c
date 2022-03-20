// W rozdziale 6 "Instrukcje sterujace C: Petle" napisalismy funkcje potega(), ktora
// zwracala wynik podniesienia liczby typu double do potegi naturalnej. Ulepsz te funkcje tak,
// aby poprawnie obslugiwala potegi ujemne. Ponadto, wbuduj w funkcje zalozenie ze 0 do dowolnej potegi wynosi 0
// oraz ze podniesinie dowolnej liczby do potegi 0 daje wynik 1. Uzyj petli. Przetestuj funkcje w programie

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
    if (b < 0)
    {
        for(i = 1; b <= i; b++)
            pot *= (1/a);
    }
    else
    {
        for(i = 1; i <= b; i++)
            pot *= a;
    }
    return pot; /* zwrot wartosci pot */
}
