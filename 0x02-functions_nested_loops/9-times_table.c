#include "main.h"
/**
 *times_table - Entry point
 *
 * Return: void
 */
void times_table(void)
{
int i = 0, j;
while (i < 10)
{
j = 0;
while (j < 10)
{
int k = i * j;
if (k == 0 && j == 0)
{
_putchar(k + '0');
}
else if (k <= 9)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(k + '0');
}
else if (k > 9)
{
_putchar(',');
_putchar(' ');
_putchar((k / 10) + '0');
_putchar((k % 10) + '0');
}
j++;
}
_putchar('\n');
i++;
}
}
