#include <stdio.h>
#define N 10

void sort_even_odd(int n, int a[]);
void print_array(int size, int a[]);
void scan_array(int size, int a[]);
int main(int argc, char **argv)
{
    int s[N];
    scan_array(N,s);
    sort_even_odd(N,s);
    print_array(N,s);
} 
void sort_even_odd(int n, int a[])
{
	int b[100] = {0};
	int count = 0;
	for(int i = 0; i < n; i++)
		b[i] = a[i];
	for(int i = 0; i < n; i++)
	{
		if ((a[i] % 2) == 0)
		{
			a[count] = a[i];
			count++;
		}
	}
	for(int i = 0; i < n; i++)
	{
		if ((b[i] % 2) != 0)
		{
			a[count] = b[i];
			count++;
		}
	}
}
void print_array(int size, int a[])
{
	for(int i = 0; i < size; i++)
		printf("%d ", a[i]);
}
void scan_array(int size, int a[])
{
	int i = 0;
    while(i < size)
		{
			scanf("%d", &a[i]);
			i++;
		}
}
