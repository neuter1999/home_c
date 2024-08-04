#include <stdio.h>
#define N 5

void scan_array(int size, int a[]);
int is_two_same(int size, int a[]);

int main(int argc, char **argv)
{
	int s[N] = {0};
	scan_array(N,s);
	printf("%d", is_two_same(N,s));
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

int is_two_same(int size, int a[])
{
	int flag = 0;
	for(int i = 0; i < size; i++)
		{
			for(int j = 0; j < size; j++)
			{
				if((a[i] == a[j])&&(i != j))
				{
					flag = 1;
					break;
				}
			}
			if(flag == 1)
				break;
		}
	return flag;
}

