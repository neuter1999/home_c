#include <stdio.h>
#define N 5

void sort_array(int size, int a[]);
void print_array(int size, int a[]);
int main(int argc, char **argv)
{
    int s[N];
    int i = 0;
    while(i < N)
		{
			scanf("%d", &s[i]);
			i++;
		}
    sort_array(N,s);
    print_array(N,s);
    
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
}
void print_array(int size, int a[])
{
	for(int i = 0; i < size; i++)
		printf("%d ", a[i]);
}
