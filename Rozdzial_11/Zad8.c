// Napisz funkcje, ktora odwraca zawartosc lancucha i zapisuje ja w tym samym lancuchu

#include <stdio.h>
#include <string.h>

void odwroc_string(char * s);

int main(void)
{
    char s[] = "onomatopeja";

    printf("String podstawowy: ");
    printf("%s\n", s);

    odwroc_string(s);
    printf("String po odwroceniu: ");
    for (int i = 0; i < strlen(s); i++)
        printf("%c", s[i]);


    return 0;
}

void odwroc_string(char * s)
{
    char * poczatek;
    char * koniec;
    char temp;

    poczatek = s;
    koniec = s + strlen(s) - 1;

    for (int i = 0; i < strlen(s) / 2; i++)
    {
        temp = *poczatek;
        *poczatek = *koniec;
        *koniec = temp;
        poczatek++;
        koniec--;
    }
}
