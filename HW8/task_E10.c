#include <stdio.h>
#define N 12
#define OFSET 4

void shift_4(int n[]);
int main(int argc, char **argv)
{
    int s[N];
    int i = 0;
    while(i < N)
	{
		scanf("%d", &s[i]);
		i++;
	}
    shift_4(s);
    return 0;
}
void shift_4(int n[])
{
	int buf = 0;
	int out[N] = {0};
	for(int i = 0; i < N; i++)
	{
		buf = i + OFSET;
		if(buf >= N)
		{
			buf = buf - N;
		}
		out[buf] = n[i];
	}
	for(int i = 0; i < N; i++)
	{
		printf("%d ", out[i]);
	}
}
