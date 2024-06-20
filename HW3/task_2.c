
#include <stdio.h>

int main(int argc, char **argv)
{
	int x,y,z,sum,mull;
	scanf("%d %d %d", &x, &y, &z);
	sum = x+y+z;
	mull= x*y*z;
	printf("%d+%d+%d=%d\n", x, y, z, sum);
	printf("%d*%d*%d=%d", x, y, z, mull);
	return 0;
}

