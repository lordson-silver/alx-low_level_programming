#include <stdio.h>

/**
 * main - c main funcyion
 * Return: always
 */

void _fibgen(void);
int main(void)
{
	_fibgen();
	return (0);
}

/**
 * _fibgen - fibonacci generator
 * Return: void
 */
void _fibgen(void)
{
	long int b, a, c;

	a = 1,  b = 2, c = 0;

	while (b < 4000000)
	{
		if (b % 2 == 0)
				c += b;
		b += a;
		a = b - a;
	}
	printf("%ld\n", c);
}
