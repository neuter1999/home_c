#include <stdio.h>
#define N 1500

void scan_innput_string(FILE *my_file_in, char in[]);
int numbers_in_string(char in[], int out[], int size);
void array_ascending(int out[], int size);
void print_int_to_file(FILE *my_file_out, int out[], int size);

int main(int argc, char **argv)
{
	FILE *input;
	FILE *output;
	
	char in[N] = {0};
	int out[N] = {0};
	
	input = fopen("input.txt", "r");
	output = fopen("output.txt", "w");
	
	scan_innput_string(input, in);
	int num = numbers_in_string(in,out,N);
	array_ascending(out, num);
	print_int_to_file(output, out, num);
	
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


void print_int_to_file(FILE *my_file_out, int out[], int size)
{
	for(int i = 0; i < size; i++)
	{
		fprintf(my_file_out, "%d ", out[i]);
	}
}

int numbers_in_string(char in[], int out[], int size)
{
	int count = 0;
	for(int i = (size-1); i >= 0; i--)
	{
		if((in[i] <= 57)&&(in[i] >= 48))
		{
			int mul = 10;
			int result = ((int)in[i]-48);
			for(int j = (i-1); j >= 0; j--)
			{
				if((in[j] <= 57)&&(in[j] >= 48))
				{
					result = result + (((int)in[j]-48)*mul);
					mul = mul*10;
					i--;
				}
				else
					break;
			}
			out[count] = result;
			count++;
		}
	}
	return count;
}

void array_ascending(int out[], int size)
{
	for(int i = 0; i < size; i++)
	{
		for(int j = 0; j < (size-1); j++)
		{
			if (out[j] > out[j+1])
			{
				int b = out[j];
				out[j] = out[j+1];
				out[j+1] = b;
			}
		}
	}
}

