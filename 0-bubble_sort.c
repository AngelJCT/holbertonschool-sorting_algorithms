#include "sort.h"
#include <stdbool.h>
/**
 *bubble_sort-function to sort an array in ascending order
 *@array: pointer to array
 *@size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
	unsigned int i, j;
	bool swapped = false;

	if (array == NULL)
		return;

	if (size < 2)
		return;

	while (swapped)
	{
		for (i = 0; i < size - 1; i++)
		{
			swapped = false;
			for (j = 0; j < (size - 1 - i); i++)
			{
				if (array[j] > array[j + 1])
				{
					swap(&array[j], &array[j + 1]);
					print_array(array, size);
					swapped = true;
				}
			}
		}
	}
}
/**
 *swap-function to swap values
 *@x: first value
 *@y: second value
 */
void swap(int *x, int *y)
{
	int temp;

	temp = *x;
	*x = *y;
	*y = temp;
}
