#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - function that prints a - z
 * followed  by a new line x10
 *
 * Return: always 0
 */
void print_alphabet_x10(void)
{
	int k = 0;
	char str[] = "abcdefghijklmnopqrstuvwxyz";

	while (k < 10)
	{
		int i = 0, j = 0;

		for (; str[i] != '\0'; i++)
		{}

		while (i > j)
		{
			_putchar(str[j]);
			j++;
		}
		_putchar('\n');
	}
}
