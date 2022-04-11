#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int ch1;
int ch2;
int ch3;
for (ch1 = 0; ch1 < 8; ch1++)
{
for (ch2 = ch1 + 1; ch2 < 9; ch2++)
{
for (ch3 = ch2 + 1; ch3 < 10; ch3++)
{
putchar((ch1 % 10) + '0');
putchar((ch2 % 10) + '0');
putchar((ch3 % 10) + '0');
if (ch1 == 7 && ch2 == 8 && ch3 == 9)
{
break;
}
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
