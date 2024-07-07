#include <stdio.h>
#define n 10000

int main(int argc, char **argv)
{
	int a[n] = {0};  // Массив цифр
	int x = 0;
	int counter = 0, bufer = 0; //Дополнительные переменные
	for (int i = 0; i < n ; i++) // Цикл подсчета цифр
	{
		x = getchar();
		if ((x == 48) && (bufer == 32))
			break;
		if (x == 32)
			counter++;
		bufer = x;
	}
	printf("%d", counter);

	return 0;
}
