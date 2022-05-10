#include "main.h"
/**
 * argstostr - Concatenate args to create strings
 * @av: char toconcate
 * @ac: int lenght of strings
 *
 * Return: char i.e concatenated args
 */

char *argstostr(int ac, char **av)
{
char *s;
int i, j, k = 0, len = 0;

if (ac == 0 || av == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
len++;
len++;
}

s = malloc(sizeof(char) * (len + 1));

if (s == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
s[k] = av[i][j];
k++;
}
s[k] = '\n';
k++;
}
return (s);
}
