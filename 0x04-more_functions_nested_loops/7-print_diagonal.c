#include "main.h"
/**
 * print_diagonal - Entry point
 * @n: the int to print
 *
 * Return: void
 */
void print_diagonal(int n)
{
if (n > 0)
{
int i;
for (i = 0; i < n; i++)
{
int b;
for (b = 0; b < i; b++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
