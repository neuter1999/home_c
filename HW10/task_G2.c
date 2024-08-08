#include <stdio.h>

void num_from_file(int *x, FILE *myfile_in);
void output_file(int N, FILE *myfile_out);

int count_letters(char a[], int size);

int main(int argc, char **argv)
{
	FILE *input;
	FILE *output;
	int N = 0;
	input = fopen("input.txt", "r");
	output = fopen("output.txt", "w");
	num_from_file(&N, input);
	output_file(N, output);

	fclose(input);
	fclose(output);
	return 0;
}
void num_from_file(int *x, FILE *myfile_in)
{
	while((fscanf(myfile_in, "%d", &(*x)) != EOF))
	{}
}

void output_file(int N, FILE *myfile_out)
{
	char ch = 'A';
	char number = '2';
	int i = 0;
	while(i < N)
	{
		putc(ch, myfile_out);
		i++;
		if(i == N)
			break;
		putc(number, myfile_out);
		i++;
		ch++;
		if(number == '8')
			number = '2';
		else
			number+=2;
	}
}
