#include "main.h"

/**
 * _isupper - function that checks if uppercase
 * @c: int param
 * Return: 1 if true, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
