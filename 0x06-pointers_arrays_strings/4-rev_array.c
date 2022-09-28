#include "main.h"

/**
 * reverse_array - function tha reverse the content of an array
 * @a: pointer param
 * @n: int param
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, j, k;

	j = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		k = a[i];
		a[i] = a[j];
		a[j--] = k;
	}
}
