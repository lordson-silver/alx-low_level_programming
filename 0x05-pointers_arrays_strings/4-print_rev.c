#include <stdio.h>
#include <string.h>

/**
 * */

void print_rev(char *s)
{
	int i,j = strlen(s);
	char str[];

	for (i = j; i > 0; i--)
	{
		strcat(str, *(s + i));
	}
	puts(str);
}
