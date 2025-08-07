#include "sort.h"

/**
 * selection_sort -  function that sorts an array of integers
 * in ascending order using the Selection sort algorithm.
 *
 * @array: array.
 *
 * @size: size of the array.
 *
 * Return: to print the array after each time you swap two elements.
 *
 */

void selection_sort(int *array, size_t size)
{
	size_t current_position, scan_position, index_of_min;
	int tmp;

	if (array == NULL || size < 2)
		return;

	for (current_position = 0; current_position < size - 1; current_position++)
	{
		index_of_min = current_position;

		for (scan_position = current_position + 1; scan_position < size; scan_position++)
		{
			if (array[scan_position] < array[index_of_min])
				index_of_min = scan_position;
		}

		if (index_of_min != current_position)
		{
			tmp = array[current_position];
			array[current_position] = array[index_of_min];
			array[index_of_min] = tmp;
			print_array(array, size);

		}
	}

}
