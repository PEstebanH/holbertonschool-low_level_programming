#include "main.h"

/**
 * fizz_buzz - prints the numbers from 1 to 100, but for multiples of three
 * prints Fizz instead of the number and for the multiples of five prints Buzz
 * instead of the number. For numbers which are multiples of both three and five
 * prints FizzBuzz
 *
 * Return: void
 */
void fizz_buzz(void)
{
    int n;

    for (n = 1; n <= 100; n++)
    {
        if (n % 15 == 0)
            printf("FizzBuzz");
        else if (n % 3 == 0)
            printf("Fizz");
        else if (n % 5 == 0)
            printf("Buzz");
        else
            printf("%d ", n);
    }
    printf("\n");
}