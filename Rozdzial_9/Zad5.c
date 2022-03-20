// Napisz program, ktory odczytuje znaki z wejscia standardowego az do
// wystapienia konca pliku. Dla kazdego znaku program powinien informowac,
// czy jest on litera. Jesli tak, program powinien równiez wyswietlicz numer
// litery w alfabecie. Na przyklad, litery c i C maja numer 3. Wykorzystaj 
// funkcje, ktora pobiera znak jako argument i zwraca jego numer w alfabecie,
// jesli jest on litera, w przeciwnym przypadku wartoscia zwracana powinno byc -1

#include<stdio.h>
#include<string.h>
#include<ctype.h>

void czy_alpha(char znak)
{
    if (isalpha(znak))
    {
        printf(" jest litera, ktora zajmuje %d miejsce w alfabecie\n", tolower(znak) - 'a' + 1);
    }
    else
    {
        printf(" nie jest litera, zatem jest zwrocone %d \n", -1);
    }
}

char odliczanie(char wyraz[], int dlugosc)
{
    for (int i = 0; i < dlugosc; i++)
    {
        putchar(wyraz[i]);
        czy_alpha(wyraz[i]);
    }
}

void main(void)
{
    char wyraz[6] = "aAbB12";
    int dlugosc_wyrazu = strlen(wyraz)-1;

    odliczanie(wyraz, dlugosc_wyrazu);
}