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
for (j = 0; j < size; j++)
{
if ((size - i - 1) > j)
{
_putchar(' ');
}
else
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
