#include <stdio.h>
#define N 1000

void sort_array(int size, int a[]);
void scan_array(int size, int a[]);
int main(int argc, char **argv)
{
    int s[N] = {0};
    int a = 0;
    int i = 0;
	while ((a = getchar()) != '\n')
	{	
		s[i] = a - 48;
		i++;
	}
    sort_array(i,s);
} 
void sort_array(int size, int a[])
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
	for(int i = 0; i < size; i++)
	{
		int count = 0;
		for(int j = 0; j < size; j++)
		{
			if (a[i] == a[j])
				count++;
		}
		if (i == 0)
			printf("%d %d\n", a[i], count);
		if ((i > 0)&&(a[i] != a[i-1]))
			printf("%d %d\n", a[i], count);
	}
}


