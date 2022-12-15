#include "sort.h"
#include <stdbool.h>
/**
 *bubble_sort-function to sort an array in ascending order
 *@array: pointer to array
 *@size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
	unsigned int i = 0, j, temp;
	bool swapped = false;

	if (array == NULL)
		return;

	if (size < 2)
		return;

	do {
		swapped = false;
		for (j = 0; j < size - 1 - i; i++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				swapped = true;
				print_array(array, size);
			}
			if (swapped == false)
				break;
		}
		i++;
	} while (swapped);
}
