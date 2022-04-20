#include "main.h"
/**
 * swap_int - Entry point for swaping
 * @a: first int to print
 * @b: second int to print
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
int f;
f = *a;
*a = *b;
*b = f;
}
