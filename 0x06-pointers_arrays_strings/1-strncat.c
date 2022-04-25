#include "main.h"
/**
* _strncat - Entry point
* @dest: char to print
* @src: char toconcatenate
* @n: int to concatenate
* Return: char
*/
char *_strncat(char *dest, char *src, int n)
{
int i;
int j;
i = 0;
while (dest[i])
{
i++;
}
for (j = 0; j < n && src[j] != '\0'; j++)
{
dest[i + j] = src[j];
}
return (dest);
}
