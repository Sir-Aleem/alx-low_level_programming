#include <unistd>
/**
 * _putchar - write char to stdout
 * @c: char to print
 *
 * Return: 1
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
return(write(1, &c, 1))
}
