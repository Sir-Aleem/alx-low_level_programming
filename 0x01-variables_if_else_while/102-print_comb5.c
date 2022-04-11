#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int c1;
int c2;
for (c1 = 0; c1 <= 98; c1++)
{
for (c2 = c1 + 1; c2 <= 99; c2++)
{
putchar((c1 / 10) + '0');
putchar((c1 % 10) + '0');
putchar(' ');
putchar((c2 / 10) + '0');
putchar((c2 % 10) + '0');
if (c1 == 8 && c2 == 9)
{
break;
}
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
