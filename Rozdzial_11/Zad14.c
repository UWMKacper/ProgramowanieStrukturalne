// Korzystajac z funkcji klasyfikujacych znaki wykonaj wlasna implementacje funkcji atoi()

#include <stdio.h>
#include <string.h>

int moj_atoi(char * ch);

int main(void)
{
    char string1[] = "D0M", string2[] = "567";

    printf("Podany string: %s\n", string1);
    int przyklad1 = moj_atoi(string1);
	printf("%d\n", przyklad1);

	printf("\nPodany string: %s\n", string2);
	int przyklad2 = moj_atoi(string2);
	printf("%d\n", przyklad2);

	return 0;
}

int moj_atoi(char * ch)
{
	int zwrot = 0;
	int pozycja = 1;

	for (int i = strlen(ch) - 1; i >= 0; i--)
	{
		if (ch[i] - '0' < 0 || ch[i] - '0' > 9)
		{
			printf("Lancuch znakow podany przez uzytkownika nie sklada sie z samych cyfr.\n");
			return 0;
		}
		zwrot += (ch[i] - '0') * pozycja;
		pozycja *= 10;
	}

	return zwrot;
}
