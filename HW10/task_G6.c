#include <stdio.h>
#define N 1500

void scan_innput_string(FILE *my_file_in, char in[]);
int count_letters(char in[], int size);
int is_palindrom(char in[], int size);
void print_answer(FILE *my_file_out, int flag);

int main(int argc, char **argv)
{
	FILE *input;
	FILE *output;
	
	char in[N] = {0};
	int flag = 0;

	
	input = fopen("input.txt", "r");
	output = fopen("output.txt", "w");

	scan_innput_string(input, in);
	flag = is_palindrom(in, count_letters(in, N));
	print_answer(output,flag);
	
	fclose(input);
	fclose(output);
	return 0;
}

void scan_innput_string(FILE *my_file_in, char in[])
{
	while((fscanf(my_file_in,"%s", in))!=EOF)
    {
    }
}


int count_letters(char in[], int size)
{
	int i = 0;
	while(in[i] != '\0')
	{
		i++;
	}
	return i;
}

int is_palindrom(char in[], int size)
{
	int flag_func = 0;
	int count = 0;
	for(int i = 0; i < (size/2); i++)
	{
		if (in[i] == in[size-i-1])
		{
			flag_func = 1;
		}
		else
		{	
			flag_func = 0;
			count++;
		}
	}
	if (count != 0)
		flag_func = 0;
	if (size == 1)
		flag_func = 1;
	return flag_func;
}

void print_answer(FILE *my_file_out, int flag)
{
	if (flag == 0)
		fprintf(my_file_out, "NO");
	if (flag == 1)
		fprintf(my_file_out, "YES");
}


