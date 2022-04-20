#include "main.h"
/**
 * print_rev - Entry point- Print reverse of a string
 * @s: the char to print
 * return: void
 */
void print_rev(char *s)
{
int i;
i = 0;
while (s[i] != '\0')
{
i++;
}
for (i = i - 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
