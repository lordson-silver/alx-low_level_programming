#include "main.h"

/**
 * print_diagonal - function that prints diagonal
 * @n: int param
 * Return: void
 */
void print_diagonal(int n)
{
	int i = 0, j;

	if (n <= 0)
		_putchar('\n');
	for (; i < n; i++)
	{
		for (j = 0; j < i; j++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
}
