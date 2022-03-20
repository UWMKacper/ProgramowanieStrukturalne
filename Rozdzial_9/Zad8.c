// Uogolnij funkcje do_binar z listingu 9.9 tak, aby pobierala ona drugi argument z przedzialu 2-10, a następnie wyswietlala pierwszy
// argument w systemie liczbowym okreslonym przez drugi argument. Na przyklad wywolanie do_binar(209,4) powinnno wyswietlic liczbę 209 w systemie czworkowym.

/* binar.c -- wyswietla liczbe calkowita w postaci dwojkowej */
#include <stdio.h>
void do_binar(unsigned long n, int a);
int main(void)
{
    unsigned long liczba;
    int a;
    printf("Podaj liczbe calkowita (q konczy program):\n");
    while (scanf("%ld", &liczba) == 1)
        {
            printf("Podaj liczbe calkowita z zakresu 2-10 okreslajaca system liczbowy:\n");
            scanf("%d", &a);
            printf("Odpowiednik liczby w okreslonym systemie liczbowym: ");
            do_binar(liczba, a);
            putchar('\n');
            printf("Podaj liczbe calkowita (q konczy program):\n");
        }
    printf("Gotowe.\n");
    return 0;
}

void do_binar(unsigned long n, int a) /* funkcja rekurencyjna */
{
    if (a < 2 || a > 10)
    {
        printf("Błąd, można wybrać liczbę z zakresu 2-10.\n");
        return;
    }
    if (n == 0)
        return ;

    // if (n < 0)
    // {
    //     putchar('-');
    //     n = abs(n);
    // }


    do_binar(n / a, a);
    printf("%d", n % a);

    return;
}
