#include <stdio.h>

/**
 * _strlen - function that gets the lengtg of a string
 * @s: char pointer
 * l: container variable
 * return: value of l 
 **/

int _strlen(char *s)
{
	int l;
	l = strlen(*s);
	return (l);
}