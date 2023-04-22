#include "sort.h"

/**
 * swap_ints - Swap two integers in an array.
 * @c: The first integer to swap.
 * @d: The second integer to swap.
 */
void swap_ints(int *c, int *d)
{
	int tmp;

	tmp = *c;
	*c = *d;
	*d = tmp;
}

/**
 * shell_sort - Sort an array of integers in ascending
 *              order using the shell sort algorithm.
 * @array: An array of integers.
 * @size: The size of the array.
 *
 * Description: Uses the Knuth interval sequence.
 */
void shell_sort(int *array, size_t size)
{
	size_t gap, i, k;

	if (array == NULL || size < 2)
		return;

	for (gap = 1; gap < (size / 3);)
		gap = gap * 3 + 1;

	for (; gap >= 1; gap /= 3)
	{
		for (i = gap; i < size; i++)
		{
			k = i;
			while (k >= gap && array[k - gap] > array[k])
			{
				swap_ints(array + k, array + (k - gap));
				k -= gap;
			}
		}
		print_array(array, size);
	}
}i
