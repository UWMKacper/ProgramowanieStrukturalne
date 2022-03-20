// 2. Zaprojektuj funkcje rzad_zn(ch,i,j), wyswietlajaca znak ch w kolumnach od i do j. Wyprobuj ja w prostym programie.
#include<stdio.h>

char rzad_zn(char ch, int i, int j)
{
    for(;i <= j; i++)
    {
        putchar(ch);
        // printf("%c ", ch);
    }
}

void main(void)
{
    int i = 4, j=5;
    char ch='a';
    char const odstep = ' ';

    rzad_zn(odstep, 0, i-1);
    rzad_zn(ch, i, j);
}
