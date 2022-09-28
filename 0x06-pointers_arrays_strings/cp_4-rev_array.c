#include "main.h"

/**
 * reverse_array - function tha reverse the content of an array
 * @a: pointer param
 * @n: int param
 * Retur: void*/
void reverse_array(int *a, int n)
{
	int container[100];
	int i, j, k;

	for (i = 0; i < n; i++)
	{
		container[i] = a[i];
	}

	for (j = i - 1, k = 0; j >= 0; j--, k++)
	{
		a[k] = container[j];
		printf("%d", a[k]);
	}
	printf("\n");
}
