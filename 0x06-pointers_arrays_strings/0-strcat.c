#include "main.h"
/**
 * _strcat - Entry point of dest and src
 * @dest: char to print
 * @src: char to concatenste
 *
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
int i, j;
i = 0;
j = 0;
if (dest[i] != '\0' && src[j] != '\0')
{
while (dest[i])
{
i++;
}
i = i;
while (src[j])
{
dest[i] = src[j];
j++;
i++;
}
}
return (dest);
}
