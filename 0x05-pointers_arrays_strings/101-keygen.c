#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid
 * passwords for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int pass[100];
	int i, sum, n;

	sum = 0;

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		pass[i] = rand() % 78;
		sum += (pass[i]);
		printf("%d", pass[i]);
		if ((2772 - sum)  < 78)
		{
			n = 2772 - sum;
			sum += n;
			printf("%d", n);
			break;
		}
	}

	return (0);
}
