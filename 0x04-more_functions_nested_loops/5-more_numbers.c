#include "main.h"
/**
 * more_numbers - Entry point
 *
 * Return: void
 */
void more_numbers(void)
{
int i = 0, j;
while (i < 10)
{
for (j = 0; j < 15; j++)
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
}
_putchar('\n');
i++;
}
}

