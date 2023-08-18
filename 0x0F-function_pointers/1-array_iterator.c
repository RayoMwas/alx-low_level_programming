#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter
 * @array: contains elements of an array
 * @size: size of the array
 * @action: function pointer
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || (*action) == NULL)
	{
		return;
	}
	i = 0;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
