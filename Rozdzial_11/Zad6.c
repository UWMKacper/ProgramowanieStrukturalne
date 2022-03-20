// Funkcja strncpy(s1, s2, n), kopiuje z s2 do s1 doklanie n znakow, w razie potrzeby skracajac lancuch s2 lub dodajac do niego znaki zerowe.
// Lancuch wynikowy moze nie konczyc sie znakiem zerowym, jesli dlugosc s2 wynosi n lub wiecej, Wartoscia zwracana jest s1. Napisz swoja wlasna wersje tej funkcji

#include <stdio.h>
#include <string.h>

char * n_strncpy(char * s1, char * s2, int n);

int main(void)
{
    char s1[10] = "";
    char s2[] = "Testowy";
    printf("Dzialanie programu dla slowa 'Testowy': \n");
    for (int i = 0; i < strlen(s1); i++)
    {
        printf("%c", s1[i]);
    }
    printf("\n");

    n_strncpy(s1, s2, 4);

    for (int i = 0; i < strlen(s1); i++)
    {
        printf("%c", s1[i]);
    }
    printf("\n");

    n_strncpy(s1, s2, 10);

    for (int i = 0; i < strlen(s1); i++)
    {
        printf("%c", s1[i]);
    }
    printf("\n");

    return 0;
}

char * n_strncpy(char * s1, char * s2, int n)
{
    if (strlen(s2) >= n)
    {
        for (int i = 0; i < n; i++)
        {
            s1[i] = s2[i];
        }
    }
    else
    {
        for (int j = 0; j < strlen(s2); j++)
        {
            s1[j] = s2[j];
        }
        for (int k = strlen(s2); k < n; k++)
        {
            s1[k] = '\0';
        }
    }

    return s1;
}
