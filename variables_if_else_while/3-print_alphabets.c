#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int I;

	I = 65;
	i = 97;

	while (i <= 122)
	{
		putchar(i);
		i++;
	}
	while (I <= 90)
	{
		putchar(I);
		I++;
	}
	putchar('\n');
	return (0);
}
