#include "main.h"

/**
 * print_last_digit - Entry point
 * @lastdigit: the number to check
 * Return: the value of the last digit
 */
int print_last_digit(int lastdigit)
{
	lastdigit = lastdigit % 10;
	if (lastdigit < 0)
	{
		lastdigit = lastdigit * -1;
	}
	_putchar(lastdigit + '0');
	return (lastdigit);
}
