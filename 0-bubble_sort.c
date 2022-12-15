#include "sort.h"
/**
 *bubble_sort-function to sort an array in ascending order
 *@array: pointer to array
 *@size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
	unsigned int i, temp, flag = 1;

	if (array == NULL)
		return;

	if (size < 2)
		return;

	while (flag)
	{
		for (i = 0; i < size - 1; i++)
		{
			flag = 0;
			if (array[i] > array[i + 1])
			{
				temp = array[i + 1];
				array[i + 1] = array[i];
				array[i] = temp;
				flag = 1;
				print_array(array, size);
			}
			if (flag == 0)
				break;
		}
	}
}
