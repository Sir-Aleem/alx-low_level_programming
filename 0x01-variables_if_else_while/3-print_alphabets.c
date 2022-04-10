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
for (ch1 = 'a'; ch1 <= 'z'; ch1++)
{
putchar(ch1);
}
for (ch2 = 'A'; ch2 <= 'Z'; ch2++)
{
putchar(ch2);
}
putchar('\n');
return (0);
}
