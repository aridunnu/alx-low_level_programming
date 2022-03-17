#include "main.h"
#include <stdio.h>
#include <time.h>

/**
 * print_sign - prints the sign of a number n
 * @n: argument of a funtion
 * Return: 1 is greater than zero. 0 is zero.
 * -1 is less than zero.
 */
int print_sign(int n)
{


if (n > 0)
{
return (1);
putchar('+');
}
else if (n == 0)
{
return (0);
putchar('0');
}
else
{
return (-1);
putchar('-');
}
putchar('\n');
}
