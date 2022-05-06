#include <unistd.h>
/**
 * _putchar - print to stdout
 * @c: char to print
 *
 * return: 1 on success
 * -1 on failure
 */
int _putchar(char c)
{
return(write(1, &c, 1));
}
