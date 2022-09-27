#include "main.h"

/**
 * print_line - function that prints a line
 * @n: int param
 * Return: void
 */
void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		if (n != 0 && n > 0)
		{
			_putchar('_');
		}
		i++;
	}
	_printf('\n');
}
