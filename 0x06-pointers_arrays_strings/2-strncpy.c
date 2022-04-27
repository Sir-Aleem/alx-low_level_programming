#include "main.h"
/**
* _strncpy - Entry point
* @dest: char to print
* @src: char toconcatenate
* @n: int to concatenate
* Return: char
*/
char *_strncpy(char *dest, char *src, int n)
{
int j;
for (j = 0; j < n; j++)
{
dest[j] = src[j];
}
for (; n > j; j++)
{
dest[j] = '\0';
}
return (dest);
}
