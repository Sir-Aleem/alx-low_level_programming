#include "main.h"
/**
 * *_strcpy - Entry point
 * @dest: character
 * @src: character
 *
 * Return: character
 */
char *strcpy(char *dest, char *src)
{
int i;

i = 0;
while (src[i])
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
return (dest);
}
