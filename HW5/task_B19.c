#include <stdio.h>

int main(int argc, char **argv)
{
	int x = 0;
	scanf("%d", &x);
	int figure = 0, dop_var = x, sum = 0;//Дополнительные переменные
	int a[5] = {0};  // Массив цифр
	int j = 0, i=0;
	while(dop_var != 0) // Цикл разбиение числа на цифры
	{
		figure = dop_var % 10;
		a[j] = figure;
		dop_var = dop_var/10;
		j++;
	}
	for (int i = 0; i < j ;i++)
	{
		sum = sum + a[i];
	}
	if (sum == 10) // Вывод
	{
		printf("YES");
	}
	else
	{
		printf ("NO");
	}
	return 0;
}
