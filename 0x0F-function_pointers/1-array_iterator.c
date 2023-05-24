#include "function_pointers.h"

/**
 * array_iterator - Print each erray element on a newl
 * @array: array
 * @size: how many element to print
 * @action: pointer pointer to print in regular or hex
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
