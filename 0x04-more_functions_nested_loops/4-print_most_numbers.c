#include "main.h"
/**
 * print_most_numbers - Entry point
 *
 * Return: void
 */
void print_most_numbers(void)
{
int k;
for (k = 48; k < 58; k++)
{
if (k == 50)
continue;
else if (k == 52)
continue;
_putchar(k);
}
_putchar('\n');
}
