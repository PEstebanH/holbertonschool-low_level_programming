#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Entry point
 * @i: the number to check
 * Return: void
 */

void print_to_98(int i)
{
	if (i < 98)
	{
		for (; i < 98; i++)
			printf("%d, ", i);
	}
	else if (i > 98)
	{
		for (; i > 98; i--)
			printf("%d, ", i);
	}
	if (i == 98)
		printf("%d\n", i);
}
