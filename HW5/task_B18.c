#include <stdio.h>

int main(int argc, char **argv)
{
	int x = 0, bufer_1 = 0, bufer_2 = 1, out = 0;
	scanf("%d", &x);
	printf("%d ",bufer_2);
	for(int i = 0; i < x-1; i++)
	{
		out = bufer_1 + bufer_2;
		printf("%d ", out);
		bufer_1 = bufer_2;
		bufer_2 = out;
	}
	return 0;
}
