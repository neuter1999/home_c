#include <stdio.h>

int main(int argc, char **argv)
{
	int x; //Целое число
	scanf("%d", &x);//ввод
	int figure = 0, bufer = 0, flag = 0, dop_var = x;
	while(dop_var != 0)
	{
		figure = dop_var % 10;
		if (figure == bufer)
		{
			flag = 1;
			break;
		}
		dop_var = dop_var/10;
		bufer = figure;
	}
	if (flag == 1)
	{
		printf("YES");
	}
	else
	{
		printf ("NO");
	}
	return 0;
}
