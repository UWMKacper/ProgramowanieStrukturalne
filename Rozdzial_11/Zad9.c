// Napisz funkcje, ktora pobiera lancuch i usuwa z niego odstepy. Wypruboj ja w programie, ktory
// odczytuje wiersze za pomoc¹ petli i konczy dzialanie po wpisaniu pustej linii. Program powienien
// stosowac funkcje do kazdego wpisanego wiersza.

#include <stdio.h>
#include <string.h>
#define LEN 81

int sprawdz_spacje(char * s);
char * s_gets(char * st, int n);

int main(void)
{
    char orig[LEN];

    puts("Wporwadz lancuch znakow (maksymalnie 80 znakow). Enter konczy dzialanie programu:");
    while (s_gets(orig, LEN) && orig[0] != '\0')
    {
        sprawdz_spacje(orig);
        puts(orig);
        puts("Wporwadz lancuch znakow (maksymalnie 80 znakow). Enter konczy dzialanie programu:");
    }
    puts("Bye!");
    return 0;
}

int sprawdz_spacje(char * s)
{
    char * pos;
    while (*s)
    {
        if (*s == ' ')
        {
            pos = s;
            do
            {
                *pos = *(pos + 1);
                pos++;
            } while (*pos);
        }
        else
            s++;
    }
    return 1;
}

char * s_gets(char * st, int n)
{
    char * ret_val;
    char * find;

    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        find = strchr(st, '\n');
        if (find)
            *find = '\0';
        else
            while (getchar() != '\n')
                continue;
    }
    return ret_val;
}
