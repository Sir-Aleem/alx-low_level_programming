#include "main.h"
/**
 * print_last_digit - Entry point
 *@n: int to print
 *
 * Return: int n % 10
 */
int print_last_digit(int n)
{
int l = n % 10;
if (n < 0)
l = l * -1;
_putchar(l + '0');
return (l);
}
