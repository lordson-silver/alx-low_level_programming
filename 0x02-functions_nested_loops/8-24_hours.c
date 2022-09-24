#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - function
 * Description: function that prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59
 * @i: hour_tens counter
 * @j: hour_unit counter
 * @k: min_tens counter
 * @l: min_unit counter
 * @m: max_hour_unit couter
 * Return: void
 */

void jack_bauer(void)
{
	int i, j, k, l, m;

	i = '0';
	while (i < '3')
	{
		j = '0';
		m = '9';
		if (i == '2')
			m = '3';

		while (j <= m)
		{
			k = '0';
			while (k < '6')
			{
				l = '0';
				while (l <= '9')
				{
					_putchar(i);
					_putchar(j);
					_putchar(':');
					_putchar(k);
					_putchar(l);
					_putchar('\n');
					l++;
				}
				l = '0';
				k++;
			}
			k = '0';
			j++;
		}
		j = '0';
		i++;
	}
}
