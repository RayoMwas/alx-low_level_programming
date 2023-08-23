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
	if (d == NULL)
	{
		printf("Ok");
		exit(1);
	}
	d->name = malloc(strlen(name) + 1);
	if (d->name == NULL)
	{
		exit(1);
	}
	strcpy(d->name, name);
	d->age = age;
	d->owner = malloc(strlen(owner) + 1);
	if (d->owner == NULL)
	{
		free(d->name);
		exit(1);
	}
	strcpy(d->owner, owner);
}
