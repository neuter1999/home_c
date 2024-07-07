#include <stdio.h>

int main(int argc, char **argv)
{
	int x, ostatok; //Целое положительное число
	scanf("%d", &x);//ввод
	ostatok = x/100;
	if ((x >= 0) && (ostatok <= 9) && (ostatok >= 1)) // Если числа положительное и остаток от деления на сто не равен нулю тогда выводим YES
    {
		printf("YES"); // Вывод
    }
	else
	{
		printf("NO"); // Вывод
	}
	return 0;
}
