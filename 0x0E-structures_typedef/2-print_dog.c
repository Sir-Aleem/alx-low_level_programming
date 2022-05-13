#include <stdio.h>
#include "dog.h"
#define NILL "(nill)"
/**
 * print_dog - print structure
 * @d: struct of dog
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
if (d == NULL)
return;
if (d->name == NULL)
d->name = NILL;
if (d->owner == NULL)
d->owner = NILL;
printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
