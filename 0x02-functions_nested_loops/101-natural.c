#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0
 */
void _natural(void);
int main (void)
{
	_natural();
	return (0);
}

/**
 * _natural - function that prints natural numbers
 * Return: void.
 */
void _natural(void)
{
	int a = 0, b = 0;

	while (b < 1024)
	{
		if ((b % 3) == 0 || (b % 5) == 0)
		{
			a += b;
		}
		b++;
	}
	printf("%d", a);
}
