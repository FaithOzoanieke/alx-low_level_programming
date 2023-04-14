#include "search_algos.h"

/**
  * interpolation_search - search the first ocurrency of a value in the array
  * @array: set of numbers
  * @size: size of the array
  * @value: value to search
  * Return: return the first index located otherwise -1
  */
int interpolation_search(int *array, size_t size, int value)
{
	size_t l = 0, r = size - 1, pos = 0;

	if (array == NULL)
		return (-1);
	pos = l + (((double)(r - l) / (array[r] - array[l])) * (value - array[l]));
	if (pos >= size)
		printf("Value checked array[%d] is out of range\n", (int) pos);
	while ((array[r] != array[l]) && (value >= array[l]) && (value <= array[r]))
	{
		pos = l + (((double)(r - l) / (array[r] - array[l])) * (value - array[l]));
		printf("Value checked array[%d] = [%d]\n", (int) pos, array[pos]);

		if (array[pos] < value)
			l = pos + 1;
		else if (array[pos] > value)
			r = pos - 1;
		else
			return (pos);
	}
	if (array[l] == value)
		return (l);
	return (-1);
}
