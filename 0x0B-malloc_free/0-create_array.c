#include "main.h"
/**
 * create_array - create Array
 * @size: int size of array
 * @c: char to e initialized
 *
 * Return: char arrray
 */
char *create_array(unsigned int size, char c)
{
char *s;
unsigned int i;
if (size == 0)
{
return (NULL);
}
s = malloc(sizeof(char) * size);
if (s == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
s[i] = c;
}
return (s);
}
