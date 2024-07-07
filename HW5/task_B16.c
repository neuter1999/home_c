#include <stdio.h>
#define n 10000

int main(int argc, char **argv)
{
	int x, y;
	scanf("%d %d", &x, &y);
	while ((x != 0) && (y != 0))
	{
    	if (x > y)
        	x = x % y;
   		else
        	y = y % x;
	}
	printf("%d", x+y);

	return 0;
}
