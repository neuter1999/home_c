#include <stdio.h>
#define N 1000

void scan_innput_word(FILE *my_file_in, char in[]);
int count_letters(char in[], int size);
void array_ascending(char in[], int size);
void comparison_of_words(char in_1[], char in_2[],int num_in_1, int num_in_2, char out[]);
void print_string_to_file(FILE *my_file_out, char out[]);

int main(int argc, char **argv)
{
	FILE *input;
	FILE *output;
	
	char in_1[N] = {0};
	char in_2[N] = {0};
	char out[N] = {0};
	
	input = fopen("input.txt", "r");
	output = fopen("output.txt", "w");
	
	scan_innput_word(input, in_1);
	scan_innput_word(input, in_2);
	comparison_of_words(in_1,in_2,count_letters(in_1,N), count_letters(in_2,N), out);
	print_string_to_file(output, out);
	
	fclose(input);
	fclose(output);
	return 0;
}

void scan_innput_word(FILE *my_file_in, char in[])
{
	int i = 0;
	char ch;
	while((ch = fgetc(my_file_in))!=EOF)
    {
		in[i++] = ch;
		if (ch == ' ')
			break;
    }
    in[i] = '\0';
}

void comparison_of_words(char in_1[], char in_2[],int num_in_1, int num_in_2, char out[])
{
	int count = 0;
	array_ascending(in_1, num_in_1);
	array_ascending(in_2, num_in_2);
	for(int i = 1; i < num_in_1; i++)
	{
		if((in_1[i] != in_1[i+1])&&(in_1[i] != in_1[i-1]))
		{
			for(int j = 1; j < num_in_2; j++)
			{
				if((in_2[j] != in_2[j+1])&&(in_2[j] != in_2[j-1]))
				{
					if(in_1[i] == in_2[j])
					{
						out[count] = in_1[i];
						count++;
						out[count] = ' ';
						count++;
					}
				}
			}
		}
	}
	out[count] = '\0';
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


void print_string_to_file(FILE *my_file_out, char out[])
{
	fprintf(my_file_out, "%s ", out);
}

void array_ascending(char in[], int size)
{
	for(int i = 0; i < size; i++)
	{
		for(int j = 0; j < (size-1); j++)
		{
			if (in[j] > in[j+1])
			{
				char b = in[j];
				in[j] = in[j+1];
				in[j+1] = b;
			}
		}
	}
}
