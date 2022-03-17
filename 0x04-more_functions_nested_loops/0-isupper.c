#include <stdio.h>
#include "main.h"

/**
 * _isupper - function that checks for upper case character
 * @c:  argument of a function
 *Return: Always 0.
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
