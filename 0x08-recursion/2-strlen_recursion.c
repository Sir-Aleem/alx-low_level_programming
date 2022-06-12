#include "main.h"
/**
 * _strlen_recursion - give lenght of string
 * @s: string to count
 *
 * Return: int lenght
 */
int _strlen_recursion(char *s)
{
if (s[0])
{
return (1 + _strlen_recursion(s + 1));
}
return (0);
}
