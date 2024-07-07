#include <stdio.h>

int main(int argc, char **argv)
{
	int x; //Целое число
	scanf("%d", &x);//ввод
	if (x >= 0) // Если число больше или равно нулю
    {
		int sum = 0; // Переменная для хранения суммы
		int figure;
		int dop_var = x;
		while(dop_var != 0)
		{
			figure = dop_var % 10;
			dop_var = dop_var/10;
			sum += figure; 
		}
		printf("%d", sum); // Вывод
    }
	return 0;
}
