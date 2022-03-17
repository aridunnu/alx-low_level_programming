#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * print_sign - prints the sign of a number n
 * @n: argument of a funtion
 * Return: Always 0 (Success)
 */
int print_sign(int n)
{


if (n > 0)

{
putchar('+');
return (1);
}
else if (n == 0)
{
putchar('0');
return (0);
}
else
{
putchar('-');
return (-1);
}
putchar('\n');
}
