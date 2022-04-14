#include "main.h"
/**
 * print_times_table -Entry Point
 * @n: int to print
 *
 * Return: void
 */
void print_times_table(int n)
{
if (n >= 0 && n <= 15)
{
int i = 0, j;
while (i <= n)
{
j = 0;
while (j <= n)
{
int k = i * j;
if (k == 0 && j == 0)
{
_putchar(k + '0');
}
if (k <= 9)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(' ');
_putchar(k + '0');
}
if (k >= 10 && k <= 99)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar((k / 10) + '0');
_putchar((k % 10) + '0');
}
if (k >= 100)
{
_putchar(',');
_putchar(' ');
_putchar((k / 100) + '0');
_putchar(((k / 10) % 10) + '0');
_putchar((k % 10) + '0');
}
j++;
}
i++;
}
}
}
