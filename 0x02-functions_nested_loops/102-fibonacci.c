#include <stdio.h>

/**
 * main - c main funcyion
 * @n - function param
 * Return: always
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
	long int a, b;

	a = 0, b = 1;

	printf("1, ");
	while (a < n)
	{
		printf("%d, ", b += b);
		a++;
	}
	printf("\n");
}
