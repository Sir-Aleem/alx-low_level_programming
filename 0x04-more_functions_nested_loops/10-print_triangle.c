#include "main.h"
/**
 * print_triangle - Entry point
 * @size: int to print
 *
 * Return: void
 */
void print_triangle(int size)
{
if (size > 0)
{
int i;
for (i = 0; i < size; i++)
{
int j;
for (j = 0; j < ((size - 1) - i); j++)
{
_putchar(' ');
}
int k;
for (k = 0; k <= i; k++)
{
_putchar('#');
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
