#include <stdio.h>
#define N 1500

void scan_innput_string(FILE *my_file_in, char in[]);
int count_letters(char in[], int size);
void change_a_b(char in[], int size);
void print_string_to_file(FILE *my_file_out, char out[]);

int main(int argc, char **argv)
{
	FILE *input;
	FILE *output;
	
	char in[N] = {0};

	
	input = fopen("input.txt", "r");
	output = fopen("output.txt", "w");
	
	scan_innput_string(input, in);
	change_a_b(in, count_letters(in, N));
	print_string_to_file(output, in);
	
	fclose(input);
	fclose(output);
	return 0;
}

void scan_innput_string(FILE *my_file_in, char in[])
{
	int i = 0;
	char ch;
	while((ch = fgetc(my_file_in))!=EOF)
    {
		in[i++] = ch;
    }
    in[i] = '\0';
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

void change_a_b(char in[], int size)
{
	for(int i = 0; i < size; i++)
	{
		switch (in[i])
		{
			case 'a':
				in[i] = 'b';
				break;
			case 'A':
				in[i] = 'B';
				break;
			case 'b':
				in[i] = 'a';
				break;
			case 'B':
				in[i] = 'A';
				break;
		}
	}
}


void print_string_to_file(FILE *my_file_out, char out[])
{
	fprintf(my_file_out, "%s ", out);
}


