#include <stdio.h>

int main(int argc, char **argv)
{
	int input_data; // Вводимые данные
	scanf("%d", &input_data); // Ввод
	int figure = 0, bufer = 0, dop_var = input_data, flag = 0, i = 0; //Дополнительные переменные
	int a[20] = {0};  // Массив цифр
	while(dop_var != 0) // Цикл разбиение числа на цифры
	{
		figure = dop_var % 10;
		a[i] = figure;
		dop_var = dop_var/10;
		bufer = figure;
		i++;
	}
	for (int j = 0; j < i; j++) // Цикл сравнения цифр в числе
	{
		if (a[j+1] >= a[j])
		{
			flag = 1;
			break;
		}
	}
	if (flag == 0) // Вывод
	{
		printf("YES");
	}
	else
	{
		printf ("NO");
	}
	return 0;
}
