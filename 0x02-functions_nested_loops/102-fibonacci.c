#include <stdio.h>

/**
 * main - c main funcyion
 * @n - function param
 * Return: always
 */

/**
* @n: int param
*/
void _fibgen(int n);
int main(void)
{
	_fibgen(50);
	return (0);
}

/**
 * _fibgen - fibonacci generator
 * @n: int param
 * Return: void
 */
void _fibgen(int n)
{
	long int i, b, a;

	i = 0, a = 1,  b = 2;

	while (i < n)
	{
		if (b == 0)
			printf("%ld", a);
		else if (b == 1)
			printf(", %ld", b);
		else
		{
			b += a;
			a = b - a;
			printf(", %ld", b);
		}
		a++;
	}
	printf("\n");
}
