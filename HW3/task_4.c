
#include <stdio.h>

int main(int argc, char **argv)
{
	int x,y,z;
	float ar_m;
	
	scanf("%d %d %d", &x, &y, &z);
	ar_m = ((float)(x+y+z))/3;
	printf("%.2f", ar_m );
	return 0;
}

