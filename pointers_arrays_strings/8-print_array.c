#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * @a: array to print
 * @n: number of elements to print
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int p = 0;

	while (p < n)
	{
		printf("%d", a[p]);
		if (p < n - 1)
		{
			printf(", ");
		}
		p++;
	}
	printf("\n");
}
