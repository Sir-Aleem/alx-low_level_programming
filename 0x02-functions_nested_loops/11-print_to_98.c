#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Entry point
 * @n: int to print
 *
 * Return: void
 */
void print_to_98(int n)
{
if (n < 98)
{
int i;
for (i = n; i <= 98; i++)
{
printf("%d", i);
if (i == 98)
break;
printf(", ");
}
}
if (n >= 98)
{
int j;
for (j = n; j >= 98; j--)
{
printf("%d", j);
if (j == 98)
break;
printf(", ");
}
}
}
