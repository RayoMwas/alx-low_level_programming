#ifndef DOG_H
#define DOG_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;
/**
 * init_dog - initializes a variable of type struct dog
 * @d: points to struct dog
 * @name: points to char name
 * @age: age of dog
 * @owner: points to char owner
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
