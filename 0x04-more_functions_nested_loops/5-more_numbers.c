#include "main.h"
/**
 * more_numbers - Entry point
 *
 * Return: void
 */
void more_numbers(void)
{
int i, j;
for (i = 0; i < 10; i++)
{
j = 0;
while (j < 15)
{
if (j >= 0 && j <= 9)
{
_putchar(j + '0');
}
else
{
_putchar((j / 10) + '0');
_putchar((j % 10) + '0');
}
j++;
}
_putchar('\n');
}
}

