#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char l;
	int i = 0;
	while (i < 10)
	{
		 
	for (l = 'a'; l <= 'z'; l++)
	{
		_putchar(l);
	}
		i++;
	}
	_putchar('\n');
}

