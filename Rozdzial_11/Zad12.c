// Napisz program, ktory wyswietla na ekranie argumenty wiersza polecen w
// odwrotnej kolejnosci. Na przyklad, jesli argumentami sa slowa id do domu,
// program powienien wyswietlic do domu idz

#include <stdio.h>

int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		printf("Za malo danych.\n");
		return 1;
	}
	else
		for (int i = argc - 1; i > 0; i--)
			printf("%s ", argv[i]);

	puts("");
	return 0;
}
