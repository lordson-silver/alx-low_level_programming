#include "main.h"

/**
 * more_numbers - function that prints 1 - 1
 * Return: void
 */
void more_numbers(void)
{
	int i, j, k, l;

	i = 0;

	while (i < 10)
	{
		j = 0;

		while (j <= 14)
		{
			if (j < 10)
				_putchar(j + '0');
			else
			{
				k = j / 10;
				_putchar(k + '0');
				l = j % 10;
				_putchar(l + '0');
			}
			j++;
		}
		i++;
		_putchar('\n');
	}	
}
