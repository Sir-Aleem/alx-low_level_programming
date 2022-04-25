#include "main.h"
/**
* reverse_array - Entry point
* @a: int to print
* @n: int index
*
* Return: void
*/
void reverse_array(int *a, int n)
{
int i;
int j;
int *b;
for (i = 0; i < n && a[i] != '\0'; i++)
{
b[i] = a[i];
}
i = i - 1;
for (j = 0; j < n; j++)
{
a[j] = b[i - j];
}
}
