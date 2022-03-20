// Zaprojektuj funkcje min(x,y), zwracajacy mniejsza z dwoch wartosci typu double, i przetestuj ja za pomoca prostego programu.

double min(double x, double y)
{
    if(x<y)
        return x;
    else
        return y;
}

void main(void)
{
    double liczba1 = 2.2, liczba2 = 1.1, w;

    printf("Liczba1: %lf. Liczba2: %lf.\n",liczba1, liczba2);

    w = min(liczba1, liczba1);
    printf("Najmniejsza liczba to: %lf", w);
}
