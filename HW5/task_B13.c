#include <stdio.h>

int main(int argc, char **argv)
{
	int input_data; // Вводимые данные
	scanf("%d", &input_data); // Ввод
	int figure = 0, bufer = 0, dop_var = input_data, counter_odd = 0, counter_honest = 0, i = 0; //Дополнительные переменные
	int a[20] = {0};  // Массив цифр
	while(dop_var != 0) // Цикл разбиение числа на цифры
	{
		figure = dop_var % 10;
		a[i] = figure;
		dop_var = dop_var/10;
		bufer = figure;
		i++;
	}
	for (int j = 0; j < i; j++) // Цикл подсчета четных и нечетных цифр в числе
	{
		int x = a[j] % 2;
		if (x != 0)
			counter_odd++;
		if (x == 0)
			counter_honest++;		
	}
	printf("%d %d", counter_honest, counter_odd);

	return 0;
}
