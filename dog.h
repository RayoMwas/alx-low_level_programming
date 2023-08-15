#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Stores info about a dog
 * @name: stores name of the dog
 * @age: stores age of the dog
 * @owner: stores the name of the owner
 *
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;
#endif
