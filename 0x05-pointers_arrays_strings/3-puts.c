#include "main.h"
/**
 * _puts - Entry point
 * @str: char to print
 *
 * Return: void
 */
void _puts(char *str)
{
int i;
char *c;
c = str;
for (i = 0; c[i]; i++)
{
_putchar(c[i]);
}
_putchar('\n');
}
