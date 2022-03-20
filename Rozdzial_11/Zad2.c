// Zmodyfikuj funkcje z cwiczenia 1 tak, aby koczyla dzialanie po odczytaniu n znakow lub po napotkaniu pierwszego odstepu, tabulatora lub
// znaku nowej liniii. (Nie korzystaj z funkcji scanf().)
#include <stdio.h>
#include <ctype.h>
#define LEN 10

char * pobierz_n_znakow(char * str, int n);
int main(void)
{
    char input[LEN];
    char *check;

    printf("Podaj znaki: \n");

    check = pobierz_n_znakow(input, LEN - 1);
    if (check == NULL)
        puts("Bledny wsad.");
    else
        puts(input);
    puts("Koniec programu.\n");

    return 0;
}

char * pobierz_n_znakow(char * str, int n)
{
    int i;
    int ch;

    for (i = 0; i < n; i++)
    {
        ch = getchar();
        if (ch != EOF && !isspace(ch))
            str[i] = ch;
        else
            break;
    }
    if (ch == EOF)
        return NULL;
    else
    {
        str[i] = '\0';
        return str;
    }
}
