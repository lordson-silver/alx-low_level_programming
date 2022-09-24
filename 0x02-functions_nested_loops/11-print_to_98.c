#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - function that prints all natural numbers to 98
 * @n: int param
 * Return: void*/

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			_putchar("%d, ", n);
			n--;
		}
	}
	printf("98\n");
}
