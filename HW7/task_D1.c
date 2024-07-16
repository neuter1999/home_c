#include <stdio.h>

void rec_print_num(int n);
int main(int argc, char **argv)
{
	int n;
	scanf("%d", &n);
	rec_print_num(n);
	return 0;
}
void rec_print_num(int n)
{
	static int bufer = 1;
	printf("%d ", bufer);
	bufer++;
	if (bufer <= n)
		rec_print_num(n);
}