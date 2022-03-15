#include <stdio.h>
#include <unistd.h>

/**
 *main - Prints _putchar
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
int str[] = { 112, 116, 99, 104, 97, 114};
int count, sz;

sz = sizeof(str) / sizeof(int);
for (count = 0; count < sz; count++)
{
putchar(str[count]);
}
putchar('\n');
return (0);
}
