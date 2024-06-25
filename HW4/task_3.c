#include <stdio.h>

int main(int argc, char **argv)
{
	int figure, x,y,z;
	scanf("%d", &figure);
	// Разбиваем число на цифры
    x = figure/100;
    y = (figure/10) - x*10;
    z = figure - x*100-y*10;
    // Производим сравнение
    if ((x>=y)&&(x>=z)) // Если x наибольшее
    {
        printf("%d", x);
    }
    else if ((y>=x)&&(y>=z)) // Если y наибольшее
    {
        printf("%d", y);
    }
    else if ((z>=x)&&(z>=y)) // Если z наибольшее
    {
        printf("%d", z);
    }
	return 0;
}
