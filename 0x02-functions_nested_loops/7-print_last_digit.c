#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - function that prints the last did=git of a number
 * @n: integer param
 * Return: l
 */

int print_last_digit(int n)
{
	int l = n % 10;

	if (n < 0)
		l *= -1;

	_putchar('0' + l);

	return (l);
}
