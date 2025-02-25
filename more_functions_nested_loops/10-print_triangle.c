#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 *
 * Return: void
 */

void print_triangle(int size)
{
	int n, j, k;

	if (size <= 0)
		_putchar('\n');
	for (n = 1; n <= size; n++)
	{
		for (j = size - n; j > 0; j--)
			_putchar(' ');
		for (k = 0; k < n; k++)
			_putchar('#');
		_putchar('\n');
	}
}
