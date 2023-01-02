#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
/**
 * merge_sort_helper - function to sort an array of integers in ascending order
 * @array: array to sort
 * @tmp: temporary array
 * @left: left index
 * @right: right index
 */
void merge_sort_helper(int *array, int *tmp, size_t left, size_t right)
{
	if (left < right)
	{
		size_t mid = (left + right) / 2;

		merge_sort_helper(array, tmp, left, mid);
		merge_sort_helper(array, tmp, mid + 1, right);
		merge(array, tmp, left, mid + 1, right);
	}
}
/**
 * merge - function to merge two sorted arrays
 * @array: array to merge
 * @tmp: temporary array
 * @left: left index
 * @mid: middle index
 * @right: right index
 */
void merge(int *array, int *tmp, size_t left, size_t mid, size_t right)
{
	size_t i, j, k;

	i = left;
	j = mid;
	k = right;
	while (i < mid && j < right)
	{
		if (array[i] < array[j])
			tmp[k++] = array[i++];
		else
			tmp[k++] = array[j++];
	}
}
/**
 * merge_sort - function to sort an array of integers in ascending order
 * @array: array to sort
 * @size: size of array
 */
void merge_sort(int *array, size_t size)
{
	int *tmp = malloc(sizeof(int) * size);

	if (tmp == NULL)
		return;

	merge_sort_helper(array, tmp, 0, size - 1);
	free(tmp);
}
