#include "sort.h"

/**
 * swap_ints - Swap two integers in an array.
 * @y: The first integer to swap.
 * @z: The second integer to swap.
 */
void swap_ints(int *y, int *z)
{
	int tmp;

	tmp = *y;
	*y = *z;
	*z = tmp;
}

/**
 * bubble_sort - Sorting an array of integers in ascending order.
 * @array:  array of integers to sort.
 * @size:  size of the array.
 *
 * Description: Prints the array after each swap.
 */
void bubble_sort(int *array, size_t size)
{
	size_t o, len = size;
	bool bubbly = false;

	if (array == NULL || size < 2)
		return;

	while (bubbly == false)
	{
		bubbly = true;
		for (o = 0; o < len - 1; o++)
		{
			if (array[o] > array[o + 1])
			{
				swap_ints(array + o, array + o + 1);
				print_array(array, size);
				bubbly = false;
			}
		}
		len--;
	}
}
