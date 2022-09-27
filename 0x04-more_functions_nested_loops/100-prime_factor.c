#include <stdio.h>

/**
 * main - main function
 * Return: always 0
 */
void prime(void);
int main(void)
{
	prime();

	return (0);
}

/**
 * prime - prints the largest prime factor
 */
void prime(void)
{
	long int i, p, pf = 612852475143;

	i = 2;
	while (i <= 612852475143 && pf > i)
	{
		p = i;
		if ((pf % p) == 0)
			pf = pf / p;
		else
			i++;
	}
	printf("%ld\n", p);
}
