#include <stdio.h>
#include "main.h"

/**
 * _islower - function that checks for lower case
 * Return: 1 if true, 0 if false
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
