#include "main.h"
/**
 * string_nconcat - concatenate two strings and allocate memory
 * @s1: char destination
 * @s2: char source
 * @n: unsigned int,index of string to concat
 *
 * Return: char concatenated
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s;
int i = 0, j = 0, k, l = 0;

while (s1 && s1[i])
i++;
while (s2 && s2[j])
j++;

if (n < j)
s = malloc(sizeof(char) * (i + n + 1));
else
s = malloc(sizeof(char) * (i + j + 1));

if (!s)
return (NULL);

for (k = 0; k < i; k++)
s[k] = s1[k];

while (n < j && k < (i + n))
s[k++] = s2[l++];

while (n >= j && k < (i + j))
s[k++] = s2[l++];

s[k] = '\0';

return (s);
}
