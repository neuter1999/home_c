#include <stdio.h>
#define N 10

void param_array(int n[]);
int main(int argc, char **argv)
{
    int s[N];
    int i = 0;
    while(i < N)
	{
		scanf("%d", &s[i]);
		i++;
	}
    param_array(s);
}
void param_array(int n[])
{
	int min = 2147483647;
	int max = -2147483648;
	int num_min = 0;
	int num_max = N;
	for(int i = 0; i < N; i++)
	{
		if(n[i] < min)
		{
			min = n[i];
			num_min = (i+1);
		}
		if(n[i] > max)
		{
			max = n[i];
			num_max = (i+1);
		}
	}
	printf("%d %d %d %d", num_max, max, num_min, min);
}
