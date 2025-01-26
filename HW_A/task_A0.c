#include <stdio.h>
#include <malloc.h>

int found_max_array(int array[], int num);//Функция нахождения максимального значения в массиве
int num_rep_array(int array[], int num, int element);//Функция подсчёта повторений элемента в массиве

int main(int argc, char **argv)
{
	unsigned int in_1 = 0;	//Количество записей в массиве
	int* array_1; //Сам массив с данными
	unsigned int counter_max = 0; //Количество максимальных значений в массиве
	int max_array_1 = 0; //переменная для хранения максимального значения в массиве

	scanf("%u", &in_1); //Получение количества переменных в массиве
	array_1 = (int*)malloc(in_1*sizeof(int));//Выделение памяти под массив
	//Цикл записи цифр в массив
	for (int i = 0; i < in_1; i++)
	{
		scanf("%i", &array_1[i]);
	}
	max_array_1 = found_max_array(array_1, in_1);
	printf("%u", num_rep_array(array_1, in_1, max_array_1));//Печать количества максимальных значений	
	free(array_1); //Освобожение памяти
	return 0;
}
//Функция нахождения максимального значения в массиве
int found_max_array(int array[], int num)
{
	int max_array = -2147483648; //Число для поиска максимального 
	//Цикл поиска максимального числа
	for (int i = 0; i < num; i++)
	{
		if(array[i] > max_array)
		{
			max_array = array[i];
		}
	}
	return max_array;
}
//Функция подсчёта повторений элемента в массиве
int num_rep_array(int array[], int num, int element)
{
	int counter_max = 0;
	//Цикл числа повторений максимального значения в массиве
	for (int i = 0; i < num; i++)
	{
		if(array[i] == element)
			counter_max++;
	}
	return counter_max;
}
