#include <stdio.h>

int main(int argc, char **argv)
{
	int x; //натуральное число
	scanf("%d", &x);//ввод
	if (x<100) // Если натуральное число меньше 100
    {
        for(int i = 1; i<=x; i++)
		{
			printf("%d %d %d\n", i, i*i, i*i*i);
		}
    }
	return 0;
}
