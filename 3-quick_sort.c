#include "sort.h"
/**
 *quick_sort-function too sort an array in ascending order
 *@array: pointer to array
 *@size: size of array
 */
void quick_sort(int *array, size_t size)
{
	unsigned int length = 0;

	if (size < 2)
		return;

	if (array == NULL)
		return;

	quicksort_recursion(array, 0, length - 1);
	print_array(array, size);
}
/**
 *partition-function to separate array into sub arrays
 *@array: pointer to array
 *@low: lowest index
 *@high: highest index
 *Return: index
 */
int partition(int *array, int low, int high)
{
	int pivot = array[high];
	int i = low - 1, j;

	for (j = 0; j < high - 1; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			swap(&array[i], &array[j]);
		}
	}
	swap(&array[i], &array[high]);
	return (i);
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
/**
 *quicksort_recursion-function to make recursive calls to loop over the array
 *@array: pointer to array
 *@low: lowest index
 *@high: highest index
 */
void quicksort_recursion(int *array, int low, int high)
{
	if (low < high)
	{
		int pivot_index = partition(array, low, high);

		quicksort_recursion(array, low, pivot_index - 1);
		quicksort_recursion(array, pivot_index + 1, high);
	}
}
