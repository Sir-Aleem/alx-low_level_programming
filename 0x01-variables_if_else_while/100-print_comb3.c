#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (success)
 */
int main(void)
{
int no1;
int no2;
for (no1 = 0; no1 < 9; no1++)
{
for (no2 = no1 + 1; no2 < 10; no2++)
{
putchar((no1 % 10) + '0');
putchar((no2 % 10) + '0');
if (no1 == 8 && no2 == 9)
{
break;
}
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}

