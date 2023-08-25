#include "lists.h"
/**
 * pre_main_function - prints a statement
 */
void pre_main_function(void) __attribute__((constructor));
void pre_main_function(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
