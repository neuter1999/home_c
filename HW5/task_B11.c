#include <stdio.h>

int main(int argc, char **argv)
{
	unsigned int input_data; // Вводимые данные
	scanf("%d", &input_data); // Ввод
	int figure = 0, bufer = 0, dop_var = input_data, i = 0; //Дополнительные переменные
	int a[20] = {0};  // Массив цифр
	if (dop_var == 0)
		printf("%d", 0);
	while(dop_var != 0) // Цикл разбиение числа на цифры
	{
		figure = dop_var % 10;
		a[i] = figure;
		dop_var = dop_var/10;
		bufer = figure;
		i++;
	}
	for (int j = 0; j < i; j++) // Цикл вывода
	{
		a[i] = a[j];
		printf("%d", a[j]);
	}
	return 0;
}
