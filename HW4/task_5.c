#include <stdio.h>

int main(int argc, char **argv)
{
	int X_1, X_2, Y_1, Y_2;
    float k, b, x_1, x_2, y_1, y_2;
	scanf("%d %d %d %d", &X_1, &Y_1 ,&X_2 ,&Y_2);
    // Расчет
    x_1 = (float)X_1;
    x_2 = (float)X_2;
    y_1 = (float)Y_1;
    y_2 = (float)Y_2;
    k = ((y_2-y_1)/(x_2-x_1));
    b = (y_1-x_1*((y_2-y_1)/(x_2-x_1)));
    // Вывод
    printf("%.2f %.2f", k,b);
	return 0;
}
