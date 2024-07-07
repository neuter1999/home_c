#include <stdio.h>
#include <math.h>

int main(int argc, char **argv)
{
	int x = 0, i = 2, flag = 0;
	scanf("%d", &x);
	while (i<= sqrt(x))
	{
		if (x % i == 0)
			flag = 1;
		i++;
	}
	if ((flag == 0) && (x != 1))
		printf("YES");
	else 
		printf("NO");
	return 0;
}