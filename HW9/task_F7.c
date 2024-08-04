#include <stdio.h>
#define NUM 10

void scan_array(int size, int a[]);
int compression(int a[], int b[], int N);

int main(int argc, char **argv)
{
	int a[NUM] = {0};
	int b[NUM] = {0};
	scan_array(NUM,a);
	printf("%d", compression(a,b,NUM));
	return 0;
} 

int compression(int a[], int b[], int N)
{
	int count = 1, n = 0;
	if (a[0] == 1)
		b[n++] = 0;
	for(int i = 1; i < N; i++)
	{
		if (a[i-1] == a[i])
		{
			count++;
		}
		else
		{
			b[n++] = count;
			count = 1;
		}
	}
	b[n++] = count;
	return n;
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
