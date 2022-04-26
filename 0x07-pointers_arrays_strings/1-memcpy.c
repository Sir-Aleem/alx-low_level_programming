#include "main.h"
/**
 * _memcpy - Entry point
 * @dest: char memory to be replaced
 * @src: char memory to replace
 * @n: int no of char to be replaced
 *
 * Return: char dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
