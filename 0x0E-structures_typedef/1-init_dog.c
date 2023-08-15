#include "dog.h"
/**
 * init_dog - initializes struct dog
 * @d: struct variable
 * @name: name of human
 * @age: age of owner
 * @owner: name of dog owner
 *
 * Return:
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
