#include <stdio.h>
#include "main.h"

/**
 * main - main function
 * Return: always 
 */
void fizz(void);
int main(void)
{
	fizz();

	printf("\n");
	return (0);
}

/**
 * fizz - function that prints the fizzbuzz algorithm
 * Return: void
 */
void fizz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 ==0)
			printf(" FizzBuzz");
		else if (i % 3 == 0)
			printf(" Fizz");
		else if (i % 5 == 0)
			printf(" Buzz");
		else if (i == 1)
			printf("%d", i);
		else
			printf(" %d", i);
	}
}
