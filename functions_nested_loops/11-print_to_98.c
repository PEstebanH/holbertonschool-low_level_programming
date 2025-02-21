#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
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