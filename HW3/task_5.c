
#include <stdio.h>

int main(int argc, char **argv)
{
	int x, mul_figures, f_1, f_2, f_3 ;
	
	scanf("%d", &x);
	f_1 = x/100;
	f_2 = x/10-f_1*10;
	f_3 = x-f_1*100-f_2*10;
	mul_figures = f_1*f_2*f_3;
	printf("%d", mul_figures );
	return 0;
}

