#include <stdio.h>

/**
 * main - prints the product of two numbers.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success, 1 - fail.
 */
int main(int argc, char *argv[])
{
	int i, j, product;

	if (argc != 3)
	{
		printf("Error");
		return (1);
	}
	i = atoi(argv[1]);
	j = atoi(argv[2]);
	product = i * j;
	printf("%d\n", product);
	return (0);
}
