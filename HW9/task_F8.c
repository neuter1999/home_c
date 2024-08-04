#include <stdio.h>
#define N 1000

int scan_array(int a[], int size);
void print_array(int a[], int size);
void array_ascending(int a[], int size);
int miss_data(int a[], int size);

int main(int argc, char **argv)
{
	int b[N] = {0};
	int num = scan_array(b, N);
	array_ascending(b, num);
	printf("%d", miss_data(b, num));
	return 0;
} 

int scan_array(int a[], int size)
{
	int i = 0;
	do 
	{
		scanf("%d", &a[i]);
	}while (a[i++] != 0);
	return (i-1);
}

void print_array(int a[], int size)
{
	for(int i = 0; i < size; i++)
		printf("%d ", a[i]);
}

void array_ascending(int a[], int size)
{
	for(int i = 0; i < size; i++)
	{
		for(int j = 0; j < (size-1); j++)
		{
			if (a[j] > a[j+1])
			{
				int b = a[j];
				a[j] = a[j+1];
				a[j+1] = b;
			}
		}
	}
}

int miss_data(int a[], int size)
{
	int miss = 0;
	for (int i = 0; i < size; i++)
	{
		if ((a[i+1] - a[i]) != 1)
		{	
			miss = a[i] + 1;
			break;
		}
	}
	return miss;
}
	
