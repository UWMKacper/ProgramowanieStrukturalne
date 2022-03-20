// Napisz program, ktory odczytuje dane do konca pliku i wyswietla je na ekranie.
// Program powinien reagowac na nastepujace argumenty wiersza polecen:
// -p		wyswietlanie danych bez zmian
// -u		zmiana wszystkich liter na duze
// -l		zmiana wszystkich liter na male

#include <stdio.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
	char mode = 'u';
	int ok = 1;
	int ch;

	if (argc > 2)
	{
		printf("Mod: %s [-p | -u | -l]\n", argv[0]);
		ok = 0;
	}
	else if (argc == 2)
	{
		if (argv[1][0] != '-')
		{
			printf("Mod: %s [-p | -u | -l]\n", argv[0]);
			ok = 0;
		}
		else
			switch(argv[1][1])
			{
				case 'p'	:
				case 'u'	:
				case 'l'	:	mode = argv[1][1]; break;
				default 	:	printf("%s niewlasciwy argument wiersza polecen; ", argv[1]);
				        		printf("domyslny argument wiersza polecen (-p).\n");
			}
	}

	if (ok)
		while ((ch = getchar()) != EOF)
		{
			switch(mode)
			{
				case 'p'	:	putchar(ch);
				        		break;
				case 'u'	:	putchar(toupper(ch));
				        		break;
				case 'l'	:	putchar(tolower(ch));
			}
		}

	return 0;
}
