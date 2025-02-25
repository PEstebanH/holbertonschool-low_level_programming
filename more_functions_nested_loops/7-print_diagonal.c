#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: length of the line
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int p, j;

	for (p = 0; p < n; p++)
	{
		for (j = 0; j < p; j++);
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}