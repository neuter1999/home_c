#include <stdio.h>
#define N 10000

void scan_innput_string(FILE *my_file_in, char in[]);
void count_letters(FILE *my_file_out, char in[]);

int main(int argc, char **argv)
{
	FILE *input;
	FILE *output;
	
	char in[N] = {0};

	
	input = fopen("input.txt", "r");
	output = fopen("output.txt", "w");

	scan_innput_string(input, in);
	count_letters(output, in);

	
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


void count_letters(FILE *my_file_out, char in[])
{
	int count_low = 0;
	int count_high =0;
	int i = 0;
	while(in[i] != '\0')
	{
		if((in[i]>=97)&&(in[i]<=122))
			count_low++;
		if((in[i]>=65)&&(in[i]<=90))
			count_high++;
		i++;
	}
	fprintf(my_file_out, "%d %d", count_low, count_high);
}

