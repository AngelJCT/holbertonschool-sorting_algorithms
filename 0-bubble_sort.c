#include "sort.h"
/**
 *bubble_sort-function to sort an array in ascending order
 *@array: pointer to array
 *@size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
	unsigned int i, temp, flag;

	if (array == NULL)
		return;

	for (i = 0; i < size - 1; i++)
	{
		flag = 0;
		if (array[i] > array[i + 1])
		{
			temp = array[i + 1];
			array[i + 1] = array[i];
			array[i] = temp;
			print_array(array, size);
			flag = 1;
		}
		if (flag == 0)
			break;
	}
}
