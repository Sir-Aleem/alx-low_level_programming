#include "main.h"
/**
 * rev_string - Entry point
 * @s: char to print
 *
 * Return: void
 */
void rev_string(char *s)
{
int i;
int j;
char a[500];

i = 0;
j = 0;

while (s[i])
{
a[i] = s[i];
i++;
}
i = i - 1;
while (i >= 0)
{
s[i] = a[j];
j++;
i--;
}
}
