#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Stores info about a dog
 * @name: stores the name of dog
 * @age: stores age of dog
 * @owner: Stores name of owner
 *
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;
#endif
