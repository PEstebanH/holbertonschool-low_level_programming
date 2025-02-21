#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 */
void jack_bauer(void)
{
    int minutes, hours;

    for (minutes = 0; minutes < 1440; minutes++)
    {
        hours = minutes / 60;
        minutes = minutes % 60;
        _putchar((hours / 10) + '0');
        _putchar((hours % 10) + '0');
        _putchar(':');
        _putchar((minutes / 10) + '0');
        _putchar((minutes % 10) + '0');
        _putchar('\n');
    }
}