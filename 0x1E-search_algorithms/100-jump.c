#include "search_algos.h"
#include <math.h>

/**
 * jump_search - search a value in a sort list
 * @array: list of numbers
 * @size: lenght of the list
 * @value: value to search
 * Return: the first index of value otherwise -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t a = 0, step = sqrt(size);

	if (array == NULL)
		return (-1);
	while (array[a] < value)
	{
		printf("Value checked array[%d] = [%d]\n", (int)a, array[a]);
		a += step;
		if (a >= size)
			break;
	}
	a -= step;
	printf("Value found between indexes [%d] and [%d]\n",
					(int)a, (int)(a + step));
	while (array[a] < value)
	{
		printf("Value checked array[%d] = [%d]\n", (int)a, array[a]);
		a++;
		if (a == size)
			return (-1);
	}

	if (array[a] == value)
	{
		printf("Value checked array[%d] = [%d]\n", (int)a, array[a]);
		return (a);
	}
	return (-1);
}
