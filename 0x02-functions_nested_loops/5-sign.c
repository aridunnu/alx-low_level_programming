#include <stdlib.h>
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
putchar(43);
return (1);
}
else if (n == 0)
{
putchar(48);
return (0);
}
else
{
putchar(45);
return (-1);
}
putchar('\n');
}
