#include <stdio.h>
#include "main.h"

/**
 * _abs - fuction that computes the absolute value of an integer
 * @n: integer parameter
 * Return: absolute value
 */

int _abs(int n)
{
	if (n < 0)
		return (n / (-1));
	else
		return (n);
}
