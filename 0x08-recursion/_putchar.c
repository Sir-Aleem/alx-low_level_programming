#include <unistd.h>
/**
 * _putchar _ Write to stdout
 * @c: the char toprint
 *
 * Return: 1 on success
 * And -1 on failure
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
