#include "main.h"
/**
 * malloc_checked - aloccate memorry to a to string
 * @b: unsigned int, size of memory allocated
 *
 * Return: void pointer
 */
void *malloc_checked(unsigned int b)
{
void *ptr;

ptr = malloc(b);

if (ptr == NULL)
exit(98);

return (ptr);
}
