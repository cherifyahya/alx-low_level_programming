#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - print each array elem
 * @array: array
 * @size: array size
 * @action: function pointer
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && size && action)
		for (i = 0; i < size; i++)
			action(array[i];
}
