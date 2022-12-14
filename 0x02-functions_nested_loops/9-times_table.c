#include <stdio.h>
#include "main.h"

/**
 * times_table - function that prints the 9 times table
 *
 * Return: void
 */
void times_table(void)
{
	int i, j, k, l, m;

	i = 0;

	while (i <= 9)
	{
		j = 0;

		while (j <= 9)
		{
			k = i * j;
			l = k / 10;
			m = k % 10;

			if (j == 0)
				_putchar('0');

			else if (k < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(m + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(l + '0');
				_putchar(m + '0');
			}
			j++;
		}

		_putchar('\n');
		i++;
	}
}
