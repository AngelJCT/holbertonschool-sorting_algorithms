#include "sort.h"
/**
 *quick_sort-function too sort an array in ascending order
 *@array: pointer to array
 *@size: size of array
 */
void quick_sort(int *array, size_t size)
{
	unsigned int i, partition_index, temp;
	int pivot;

	if (size < 2)
		return;

	if (array == NULL)
		return;

	pivot = array[size - 1];
	partition_index = 0;

	for (i = 0; i < size - 1; i++)
	{
		if (array[i] < pivot)
		{
			temp = array[i];
			array[i] = array[partition_index];
			array[partition_index] = temp;
			partition_index++;
			print_array(array, size);
		}
		temp = array[size -1];
		array[size - 1] = array[partition_index];
		array[partition_index] = temp;

		quick_sort(array, partition_index);
		quick_sort(array + partition_index + 1, size - partition_index - 1);
	}
}
