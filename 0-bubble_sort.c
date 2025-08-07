#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending order
 *               using the Bubble sort algorithm
 * @array: The array to be sorted
 * @size: The number of elements in the array
 *
 * Return: Nothing
 */
void bubble_sort(int *array, size_t size)
{
	int tmp, swapped;
	size_t i, j;

    /* Étape 1 : Vérifie si le tableau est NULL */
	/* ou s’il a moins de 2 éléments. */

	if (array == NULL || size < 2)
	{
		return;
	}

    /* Étape 2 : Crée deux boucles imbriquées */

	for (i = 0; i < size - 1; i++)
	{
		swapped = 0;

		for (j = 0; j < size - 1 - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				/* Étape 3 : Si un élément est plus grand que le suivant, */
				/* échange-les. */

				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				print_array(array, size);

				swapped = 1;
			}
		}

		if (!swapped)
		{
			break;
		}
	}
}
