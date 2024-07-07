#include <stdio.h>
#define n 500

int main(int argc, char **argv)
{
	int a[n] = {0};  // Строка
	int x = 0;
	for (int i = 0; i < n; i++) // Цикл вывода и преобразования заглавных в строчные
	{
		x = getchar();
		if (x == 46)
			break;
		if ((x >= 65) && (x <= 90)) // согласно таблице ASCII
			x = x + 32;
		printf("%c", (char)x );
	}
	return 0;
}
