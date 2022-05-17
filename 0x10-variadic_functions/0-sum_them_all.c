#include "variadic_functions.h"
/**
 * sum_them_all - sum all the argument parameter
 * @n: int, index of the arg_param
 *
 * Return: int sum
 */

int sum_them_all(const unsigned int n, ...)
{
if (n == 0)
return (0);

va_list ap;
va_start(ap, n);

unsigned int i;
int sum = 0, num;

for (i = 0; i < n; i++)
{
num = va_arg(ap, int);
sum += num;
}

va_end(ap);
return (sum);
}

