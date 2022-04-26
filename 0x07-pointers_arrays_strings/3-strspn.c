#include "main.h"
/**
 * _strspn - Entry point
 * @s: source string
 * @accept:accepted string
 *
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
int a = 0, b, t = 0;
while (accept[a])
{
b = 0;
while (s[b] != 32)
{
if (accept[a] == s[b])
{
t++;
}
b++;
}
a++;
}
return (t);
}
