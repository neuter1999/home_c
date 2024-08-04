#include <stdio.h>
#define N 1000

int scan_array(char a[], int size);
void num_letter(char a[], int size);

int main(int argc, char **argv)
{
	char in[N];
	int num = 0;
	num = scan_array(in, N);
	num_letter(in, num);
	return 0;
} 

int scan_array(char a[], int size)
{
	char ch;
	int i = 0;
	while ((ch = getchar()) != '.')
	{
		a[i] = ch;
		i++;
	}
	return i;
}

void num_letter(char a[], int size)
{
	int count = 1;
	for(int i = 0; i < size; i++)
	{
		if (a[i] == a[i+1])
		{
			count++;
		}
		else
		{
			printf("%c%d", a[i], count);
			count = 1;
		}
	}
}
