#include <stdio.h>

int main(int argc, char **argv)
{
	int x;
	scanf("%d", &x);
	for(int i = 10; i <= x; i++)
	{
		int figure = 0, dop_var = i, sum = 0, mull = 1; //Дополнительные переменные
	    int a[5] = {0};  // Массив цифр
		int j = 0;
		while(dop_var != 0) // Цикл разбиение числа на цифры
		{
			figure = dop_var % 10;
			a[j] = figure;
			dop_var = dop_var/10;
			j++;
		}
		int k = 0;
		for(int k = 0; k < j; k++)//Цикл вывода
		{
			sum = sum + a[k];
			mull = mull * a[k];
		}
		if (sum == mull)
			printf("%d ", i);
	}
	return 0;
}
