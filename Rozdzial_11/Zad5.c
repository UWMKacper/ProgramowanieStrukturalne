// Napisz funkcje zawiera(), pobierajaca jako argumenty znak oraz lancuch i zwracajaca wartosc niezerowa (prawde),
// jesliznak znajdujesie w lancuchu, a w przeciwnym wypadku - wartosc 0

#include <stdio.h>
#include <string.h>
#define LEN 80

_Bool zawiera(const char * str, char c);
char * s_gets(char * st, int n);

int main(void)
{
    char input[LEN];
    char ch;
    int znajduje_sie;

    printf("Wprowadz lancuch znakow: ");
    while (s_gets(input, LEN) && input[0] != '\0')
    {
        printf("Wprowadz znak: ");
        ch = getchar();
        while (getchar() != '\n')
            continue;
        znajduje_sie = zawiera(input, ch);
        if (znajduje_sie == 0)
            printf("%c nie ma w lancuchu znakow.\n", ch);
        else
            printf("%c jest w lancuchu %s\n", ch, input);
        printf("Wprowadz lancuch znakow: ");
    }
    puts("Koniec programu.\n");

    return 0;
}

_Bool zawiera(const char * str, char ch)
{
    while (*str != ch && *str != '\0')
        str++;
    return *str;
}

char * s_gets(char * st, int n)
{
    char * zwrot;
    char * znajdz_znak;

    zwrot = fgets(st, n, stdin);
    if (zwrot)
    {
        znajdz_znak = strchr(st, '\n');
        if (znajdz_znak)
            *znajdz_znak = '\0';
        else
            while (getchar() != '\n')
                continue;
    }
    return zwrot;
}
