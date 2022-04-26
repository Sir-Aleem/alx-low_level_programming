#include <unistd.h>
/**
 * _putchar - write to stdout
 * @c: char to print
 *
 * Return: 1 on success
 * and -1 on failure
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
