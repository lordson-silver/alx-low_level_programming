#include <stdio.h>
#include "main.h"

/**
 * main - C main function
 * function that prints _putchar, followed  by a new line
 *
 * return: always 0
 */
int main(void)
{
	char str[] = "_putchar";
	int i = 0, j = 0;

	for (; str[i] != '\0'; i++)
	{}

	while (i > j)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
	return (0);
}
