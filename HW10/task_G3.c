#include <stdio.h>
#define N 1000

void scan_innput_string(FILE *my_file_in, char a[]);
int count_letters(char a[], int size);
void number_equal_last(FILE *my_file_out, char a[], int size);

int main(int argc, char **argv)
{
	FILE *input;
	FILE *output;
	char str[N] = {0};
	
	input = fopen("input.txt", "r");
	output = fopen("output.txt", "w");
	scan_innput_string(input, str);
	number_equal_last(output, str, count_letters(str, N));
	fclose(input);
	fclose(output);
	return 0;
}

void scan_innput_string(FILE *my_file_in, char a[])
{
	int i = 0;
	char ch;
	while((ch = fgetc(my_file_in))!=EOF)
    {
		a[i++] = ch;
    }
    a[i] = '\0';
}

int count_letters(char a[], int size)
{
	int i = 0;
	while(a[i] != '\0')
	{
		i++;
	}
	return i;
}

void number_equal_last(FILE *my_file_out, char a[], int size)
{
	for(int i = 0; i < (size-1); i++)
	{
		if (a[i] == a[size-1])
			fprintf(my_file_out, "%d ", i);
	}
}

