#include <stdio.h>

void rec_num_figure(int n);
int main(int argc, char **argv)
{
	int n;
	scanf("%d", &n);
	rec_num_figure(n);
	return 0;
}
void rec_num_figure(int n)
{
	int remainder = 0;
	remainder = n % 10;
	n = n /10;
	printf("%d ", remainder);
	if (n != 0)
		rec_num_figure(n);
}