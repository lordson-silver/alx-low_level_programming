#include "main.h"

/**
 * more_numbers - function that prints 1 - 1
 * Return: void
 */
void more_numbers(void)
{
	int i, j;

	i = 0;

	while (i < 10)
	{
		j = 0;

		while (j <= 14)
		{
			_putchar(j + '0');
			j++;
		}
		i++;
		_putchar('\n');
	}	
}
