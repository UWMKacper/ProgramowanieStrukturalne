// Zaprojektuj funkjcê, która pobiera z danych wejsciowych pierwsze slowo i porzuca reszte wiersza. Za slowo
// mozesz uznac ciag znakow nie zawierajacy odstepow, tabulatorow lub znakow nowej linii.
#include <stdio.h>
#define LEN 80
#include <ctype.h>


char * pobierz_slowo(char * str);
int main(void)
{
    char input[LEN];

    while (pobierz_slowo(input) != NULL)
        puts(input);
    puts("Done.\n");

    return 0;
}

char * pobierz_slowo(char * str)
{
    int ch;
    char * orig = str;

    while ((ch = getchar()) != EOF && isspace(ch))
        continue;
    if (ch == EOF)
        return NULL;
    else
        *str++ = ch;

    while ((ch = getchar()) != EOF && !isspace(ch))
        *str++ = ch;
    *str = '\0';
    if (ch == EOF)
        return NULL;
    else
    {
        while (ch != '\n')
            ch = getchar();
        return orig;
    }
}
