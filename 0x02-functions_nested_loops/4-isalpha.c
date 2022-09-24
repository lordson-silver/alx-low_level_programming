#include <stdio.h>
#include "main.h"

/**
 * _isalpha - function that checks for alphabets
 * @c: character to be checked in ASCII
 * Return: 1 if true, 0 if false
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
