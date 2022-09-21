#include <stdio.h>

/**
 * swap_int - swap the value of two integers
 * @*a: integer pointer to br changed
 * @*b: integer pointer to be changed
 * @c: container variable
 * Return: null
 **/

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
