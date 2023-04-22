#include "sort.h"

/**
 * swap_ints - Swap two integers in an array.
 * @p: The first integer to swap.
 * @q: The second integer to swap.
 */
void swap_ints(int *p, int *q)
{
	int tmp;

	tmp = *p;
	*p = *q;
	*q = tmp;
}

/**
 * selection_sort - Sort an array of integers in ascending order
 *                  using the selection sort algorithm.
 * @array: An array of integers.
 * @size: The size of the array.
 *
 * Description: Prints the array after each swap.
 */
void selection_sort(int *array, size_t size)
{
	int *min;
	size_t d, e;

	if (array == NULL || size < 2)
		return;

	for (d = 0; d < size - 1; d++)
	{
		min = array + d;
		for (e = d + 1; e < size; e++)
			min = (array[e] < *min) ? (array + e) : min;

		if ((array + d) != min)
		{
			swap_ints(array + d, min);
			print_array(array, size);
		}
	}
}
