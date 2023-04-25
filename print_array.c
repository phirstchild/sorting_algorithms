#include <stdlib.h>
#include <stdio.h>

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size)
{
	size_t o;

	o = 0;
	while (array && o < size)
	{
		if (o > 0)
			printf(", ");
		printf("%d", array[o]);
		++o;
	}
	printf("\n");
}
