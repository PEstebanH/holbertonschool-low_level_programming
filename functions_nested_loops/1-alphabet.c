#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase
 *
 * Return: void
 */
void print_alphabet(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
		_putchar(l);
	}
	_putchar('\n');
}
