// Zaprojektuj funkjce, ktora przeglada lancuch w poszukiwaniu zadanego znaku. Jesli znak zostanie znaleziony,
// funkcja powinna zwracac wskaznik do znaku; w przeciwnym wypadku powinna ona zwracac wskaznik zerowy.

#include <stdio.h>
#include <string.h>

char * strchr1(char * s, int c);

int main(void)
{
    char s[20];
    char c;

    printf("Wprowadz lancuch znakow i poszukiwany znak: ");

    while (scanf("%s %c", s, &c) == 2)
    {
        while (getchar() != '\n')
            continue;
        char * check = strchr1(s, c);
        if (!check)
            printf("Znak %c nie zostal znaleziony w lancuchu znakow.\n", c);
        else
            printf("Znak %c zostal znaleziony!\n", *check);
        printf("Wprowadz lancuch znakow i poszukiwany znak: ");
    }

    return 0;
}

char * strchr1(char * s, int c)
{
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == c)
            return &s[i];
    }

    return NULL;
}
