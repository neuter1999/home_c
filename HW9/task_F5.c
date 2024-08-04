#include <stdio.h>
#define N 5

void scan_array(int size, int a[]);
int find_max_array(int size, int a[]);

int main(int argc, char **argv)
{
	int s[N] = {0};
	scan_array(N,s);
	printf("%d", find_max_array(N,s));
	return 0;
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

int find_max_array(int size, int a[])
{
	int max = a[0];
	for(int i = 0; i < size; i++)
	{
		if(a[i] > max)
			max = a[i];
	}
	return max;
}

