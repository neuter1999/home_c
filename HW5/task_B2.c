#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int a,b; //Два целых числа
	scanf("%d %d", &a, &b);//ввод
	if ((abs(a) < 100)&&(abs(b) < 100)&&(a <= b)) // Если числа меньше ста по модулю, а также а меньше b
    {
        for(int i = a; i<=b; i++)// Выводим квадраты чисел
		{
			printf("%d ", i*i);
		}
    }
	return 0;
}