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
int i;
int j;
i = 0;
while (dest[i])
{
i++;
}
for (j = 0; j < n && src[j]; j++)
{
dest[j] = src[j];
}
return (dest);
}
