#include <stdio.h>
#define N 1000

void file_to_string(char a[], int size, FILE *myfile_in, FILE *myfile_out);
int count_letters(char a[], int size);

int main(int argc, char **argv)
{
	FILE *input;
	FILE *output;
	char str[N];
	
	input = fopen("input.txt", "r");
	output = fopen("output.txt", "w");
	file_to_string(str, N, input, output);
	fclose(input);
	fclose(output);
	return 0;
} 

void file_to_string(char a[], int size, FILE *myfile_in, FILE *myfile_out)
{
	int num = 0;
	while((fgets(a, size, myfile_in))!=NULL)
    {
    }
    num = count_letters(a,size);
	fprintf(myfile_out, "%s, %s, %s %d ", a, a, a, num);
}

int count_letters(char a[], int size)
{
	int i = 0;
	while(a[i] != '\0')
	{
		i++;
	}
	a[i-1] = '\0';
	return --i;
}
