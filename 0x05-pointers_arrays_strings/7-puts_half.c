#include "main.h"
/**
 * puts_half - Entry point, print half of the string
 * @str: char to print
 * Return: void
 */
void puts_half(char *str)
{
int i = 0, last;
while (str[i] != '\0')
{
i++;
}
last = (i - 1) / 2;
for (i = last; str[i]; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
