#include <unistd.h>
/**
 * _putchar - write to stdout
 * @c: char to print
 *
 * Return: 1 on success
 * -1 is returned on failure
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
