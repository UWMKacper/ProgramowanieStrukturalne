// Napisz program do potegowania dzialajacy w oparciu o wiersz polecen.
// Pierwszym argumentem powinna byc liczba typu double (podstawa potegi), a drugim
// liczba calkowita (wykladnik)

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
	double num, exp;

	if (argc != 3)
		printf("Wykladnik liczby: %s\n", argv[0]);
	else
	{
		num = atof(argv[1]);
		exp = atof(argv[2]);
		printf("%f do potegi %f = %g\n", num, exp, pow(num, exp));
	}

	return 0;
}
