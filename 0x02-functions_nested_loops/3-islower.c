#include <stdio.h>
#include "main.h"

/**
 * _islower - function that prints lower case alphabet
 * @c:  argument of a function
 *Return: Always 0.
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
