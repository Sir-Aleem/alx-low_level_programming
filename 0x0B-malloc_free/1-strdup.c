#include "main.h"
/**
 * _strdup - Duplicate a string and allocate a memory space to it
 * @str: string to duplicate
 *
 * Return: char String duplicated
 */
char *_strdup(char *str)
{
int i = 0, j;
char *s;
if (str == NULL)
return (NULL);

while (str[i] != '\0')
i++;

s = malloc(sizeof(char) * (i + 1));

if (s == NULL)
return (NULL);

for (j = 0; j < i; j++)
s[j] = str[j];
s[j] = '\0';

return (s);
}
