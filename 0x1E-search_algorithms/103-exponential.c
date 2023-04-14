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
  * binary_search_p - search the first ocurrency of a value in the array
  * @array: set of numbers
  * @l: left limit
  * @r: right limit
  * @value: value to search
  * Return: return the first index located otherwise -1
  */
int binary_search_p(int *array, size_t l, size_t r, int value)
{
	size_t mid = 0;

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

/**
  * min_value - get the min value of two numbers
  * @l: number l
  * @r: number r
  * Return: return the minimun value
  */
size_t min_value(size_t l, size_t r)
{
	return ((l < r) ? l : r);
}

/**
  * exponential_search - search the first ocurrency of a value in the array
  * @array: set of numbers
  * @size: size of the array
  * @value: value to search
  * Return: return the first index located otherwise -1
  */
int exponential_search(int *array, size_t size, int value)
{
	size_t pow = 1;

	if (array == NULL)
		return (-1);
	while (pow < size && array[pow] < value)
	{
		printf("Value checked array[%d] = [%d]\n", (int)pow, array[pow]);
		pow *= 2;
	}
	printf("Value found between indexes [%d] and [%d]\n",
					(int)(pow / 2), (int)min_value(pow, size - 1));
	return (binary_search_p(array, pow / 2, min_value(pow, size - 1), value));
}
