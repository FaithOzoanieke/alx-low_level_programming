#include "search_algos.h"

/**
  * print_array - print array with limits in l and r
  * @array: set of numbers
  * @l: left limit
  * @r: right limit
  * Return: nothing
  */
void print_array(int *array, size_t l, size_t r)
{
	printf("Searching in array: ");
	for (l = l; l < r; l++)
		printf("%d, ", array[l]);
	printf("%d\n", array[l]);
}


/**
  * binary_search - search the first ocurrency of a value in the array
  * @array: set of numbers
  * @size: size of the array
  * @value: value to search
  * Return: return the first index located otherwise -1
  */
int binary_search(int *array, size_t size, int value)
{
	size_t l = 0, r = size - 1, mid = 0;

	if (array == NULL)
		return (-1);
	while (l <= r)
	{
		print_array(array, l, r);
		mid = (l + r) / 2;
		if (array[mid] < value)
			l = mid + 1;
		else if (array[mid] > value)
			r = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
