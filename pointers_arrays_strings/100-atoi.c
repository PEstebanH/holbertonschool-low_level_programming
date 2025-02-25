#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: string to convert
 *
 * Return: the integer value of the converted string
 */
int _atoi(char *s)
{
	int p = 0, sign = 1, num = 0, started = 0;

	while (s[p] != '\0')
	{
		if (s[p] == '-')
		{
			sign *= -1;
		}
		if (s[p] >= '0' && s[p] <= '9')
		{
			num = num * 10 + sign * (s[p] - '0');
			started = 1;
		}
		else if (started)
		{
			break;
		}
		p++;
	}

	return (num);
}
