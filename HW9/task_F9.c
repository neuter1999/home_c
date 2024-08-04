#include <stdio.h>
#define N 5

void scan_array(int a[], int size);
void print_array(int a[], int size);
void swap_negmax_last(int size, int a[]);


int main(int argc, char **argv)
{
	int b[N] = {0};
	scan_array(b, N);
	swap_negmax_last(N,b);
	print_array(b, N);
	return 0;
} 

void scan_array(int a[], int size)
{
	for(int i = 0; i < size; i++)
		scanf("%d", &a[i]);
}

void print_array(int a[], int size)
{
	for(int i = 0; i < size; i++)
		printf("%d ", a[i]);
}

void swap_negmax_last(int size, int a[])
{
	int buf = 0;
	int i = 0;
	int max_neg = -2147483648;
	int max_neg_num = 0;
	for (; i < size; i++)
	{
		if ((a[i] > max_neg)&&(a[i] < 0))
		{
			max_neg = a[i];
			max_neg_num = i;
		}
	}
	if (max_neg != -2147483648)
	{
		buf = a[size -1];
		a[size -1] = max_neg;
		a[max_neg_num] = buf;
	}
}

