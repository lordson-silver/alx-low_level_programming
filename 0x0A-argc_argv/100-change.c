#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change for an amount of
 * money.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success, 1 - fail.
 */
int change(int cents);
int main(int argc, char *argv[])
{
	int cents, coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	coins = 0;
	change(cents, &coins);
	printf("%d\n", coins);
	return (0);
}

/**
 * change - calculates the minimum number of coins to make change for an amount
 * of money.
 * @cents: amount of money.
 * @coins: number of coins.
 * Return: coins.
 */
int change(int cents)
{
	int coins = 0;

	while (cents >= 25)
	{
		cents -= 25;
		coins++;
	}
	while (cents >= 10)
	{
		cents -= 10;
		coins++;
	}
	while (cents >= 5)
	{
		cents -= 5;
		coins++;
	}
	while (cents >= 2)
	{
		cents -= 2;
		coins++;
	}
	while (cents >= 1)
	{
		cents -= 1;
		coins++;
	}
	return (coins);
}
