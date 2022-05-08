#include "main.h"
/**
 * str_concat - This function concatenates too strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: concatenation string
 */
char *str_concat(char *s1, char *s2)
{
char *strconcat;
int i = 0, j = 0, k, l, m;
if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

while (s1[i] != '\0')
i++;

while (s2[j] != '\0')
j++;

k = i + j + 1;
strconcat = malloc(sizeof(char) * k);

if (strconcat == NULL)
return (NULL);

for (l = 0; l < i; l++)
strconcat[l] = s1[l];

for (m = 0; l < k && m < j; l++, m++)
strconcat[l] = s2[m];
strconcat[l] = '\0';

return (strconcat);
}
