#include "main.h"
/**
 * _memset - Entry point
 * @s: char string
 * @b: string intial
 * @n: int length of string
 *
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}

/**
 * _calloc - allocate memory for an array using malloc
 * @nmemb: int array lenght
 * @size: int array size
 *
 * Return: void pointer
 *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *memarray;
unsigned int len;
len = nmemb * size;

if (nmemb == 0 || size == 0)
return (NULL);

memarray = malloc(len);

if (memarray == NULL)
return (NULL);

_memset(memarray, 0, len);

return (memarray);
}
