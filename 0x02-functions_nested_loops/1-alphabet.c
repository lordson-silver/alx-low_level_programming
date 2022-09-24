#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - 
 * function that prints a - z, followed  by a new line
 *
 * Return: always 0
 */
void print_alphabet(void)
{
	char str[] = "abcdefghijklmnopqrstuvwxyz";
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
