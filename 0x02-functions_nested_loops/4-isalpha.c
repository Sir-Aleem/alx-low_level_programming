#include "main.h"
/**
 * _isalpha - Entry point of c
 *@c: int to print
 *
 * Return: 1 or 0
 */
int _isalpha(int c)
{
if ((c >= 65 && c <= 80) || (c >= 97 && c <= 122))
{
return (1);
}
else
{
return (0);
}
}
