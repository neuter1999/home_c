#include <stdio.h>
#define N 1000

void scan_string(char a[]);
void print_digit(char s[]);

int main(int argc, char **argv)
{
	char s[N];int r;
	r=scanf("%[0-9]",s);
	print_digit(s);
	return 0;
} 

void print_digit(char s[])
{	
	int k = 0; 
	while(s[k] != '\0')
	{
		k++;
	}
	for(int i = 0; i < k; i++)
	{
		for(int j = 0; j < (k-1); j++)
		{
			if (s[j] > s[j+1])
			{
				int b = s[j];
				s[j] = s[j+1];
				s[j+1] = b;
			}
		}
	}
	for(int i = 0; i < k; i++)
	{
		int count = 0;
		for(int j = 0; j < k; j++)
		{
			if (s[i] == s[j])
				count++;
		}
		if ((i == 0)&&(s[i]<58)&&(s[i]>47))
			printf("%d %d\n", (s[i]-48), count);
		if ((i > 0)&&(s[i] != s[i-1])&&(s[i]<58)&&(s[i]>47))
			printf("%d %d\n", (s[i]-48), count);
	}
}


