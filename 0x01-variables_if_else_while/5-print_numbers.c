#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Prints all single digit numbebrs in base ten starting from 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
for (i = 0; i < 10; i++)
{
printf("%d", i);
}
putchar('\n');
return (0);
}
