#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int a,b; //Два целых числа
	scanf("%d %d", &a, &b);//ввод
	if ((abs(a) <= 100)&&(abs(b) <= 100)&&(a <= b)) // Если числа меньше ста по модулю, а также а меньше b
    {
        int sum = 0; // Переменная для хранения суммы квадратов чисел
		for(int i = a; i<=b; i++)// Считаем сумму
		{
			sum+=i*i;
		}
		printf("%d", sum); // Вывод суммы
    }
	return 0;
}
