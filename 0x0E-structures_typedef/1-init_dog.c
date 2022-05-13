#include "dog.h"
#define NULL (void *)0

/**
 * init_dog - initialize the value of struct
 * @d: structure of dog
 * @name: char name of dog
 * @age: float age of dog
 * @owner:char owner of dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
return;
d->name = name;
d->age = age;
d->owner = owner;
}
