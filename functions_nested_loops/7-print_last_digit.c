#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
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