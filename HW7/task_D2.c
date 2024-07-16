#include <stdio.h>

void rec_sum(int n);
int main(int argc, char **argv)
{
	int n;
	scanf("%d", &n);
	rec_sum(n);
	return 0;
}
void rec_sum(int n)
{
	static int bufer = 1;
	static int sum = 0;
	sum = sum + bufer;
	bufer++;
	if(bufer == (n+1))
		printf("%d", sum);
	if(bufer <= n)
		rec_sum(n);
}