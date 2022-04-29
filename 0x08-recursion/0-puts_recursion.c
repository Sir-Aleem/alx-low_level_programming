#include "main.h"
/**
 * _puts_recursion - prints like puts
 * @s: string char toprint
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
_putchar('\0');
else
{
_putchar(*s);
_puts_recursion(++s);
}
}
