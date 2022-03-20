// Napisz funkcje zawiera_lan(), ktora pobiera jako argumenty dwa wskazniki lancuchowe. Jesli drugi lancuch zawiera sie w pierwszym lancuchu,
// funkcja powinna zwróciæ adres, pod ktorym rozpoczyna sie ten lancuch. Na przyklad, wywolanie zawiera_lan("pula", "ul") powinno zwrocic
// adres litery u w sklowie pula. Jesli drugi lancuch nie zawiera sie w pierwszym lancuchu, zwracana wartoscia powienen byc wskaznik zerowy.

#include <stdio.h>
#define LEN 20

char * zawiera_lan(const char * s1, const char * s2);
int main(void)
{
    char orig[LEN] = "pula";
    char * find;

    puts(orig);
    find = zawiera_lan(orig, "ul");
    if (find)
        puts(find);
    else
        puts("Brak.\n");

    return 0;
}

#include <string.h>
char * zawiera_lan(const char * s1, const char * s2)
{
    int l2 = strlen(s2);
    int proby;
    int nomatch = 1;

    proby = strlen(s1) + 1 - l2;
    if (proby > 0)
        while (( nomatch = strncmp(s1, s2, l2)) && proby--)
            s1++;
    if (nomatch)
        return NULL;
    else
        return (char *) s1;
}
