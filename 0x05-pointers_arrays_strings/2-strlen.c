#include "main.h"
/**
 * _strlen - Entry point count length
 * @s: char to count
 *
 * Return: int i
 */
int _strlen(char *s)
{
int i;
i = 0;
while (s[i] != '\0')
{
i++;
}
return (i);
}
