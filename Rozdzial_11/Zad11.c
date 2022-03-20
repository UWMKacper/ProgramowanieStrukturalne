// Napisz program ktory pobiera dane wejsciowe do momentu wystapienia konca pliku, a nastepnie
// wyswietla informacje o liczbie slow, wielkich liter, malych liter, znakow przystankowych oraz cyfr.
// Skorzystaj z rodziny funkvji ctype.h

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
int main(void)
{
    char c;
    int low_ct = 0;
    int up_ct = 0;
    int dig_ct = 0;
    int liczba_slow = 0;
    int punc_ct = 0;
    bool inword = false;

    printf("Wprowadz lancuch znakow:\n");
    while ((c = getchar()) != EOF)
    {
        if (islower(c))
            low_ct++;
        else if (isupper(c))
            up_ct++;
        else if (isdigit(c))
            dig_ct++;
        else if (ispunct(c))
            punc_ct++;

        if (!isspace(c) && !inword)
        {
            inword = true;
            liczba_slow++;
        }
        if (isspace(c) && inword)
            inword = false;
    }
    printf("\nliczba slow = %d, male litery = %d, duze litery = %d, "
           "cyfry = %d, znaki interpunkcyjne = %d\n",
            liczba_slow, low_ct, up_ct, dig_ct, punc_ct);
    return 0;
}
