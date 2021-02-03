#include "sort.h"
/**
 * quick_sort - sorting
 * @array: yep
 * @size: num
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
	size_t begin = 0;
	size_t end = size - 1;

	if (array == NULL || size == 0 || size == 1)
		return;
	sort(array, begin, end, size);
}
/**
 * swap - hmmm
 * @a: num
 * @b: num
 * Return: ints
 */
void swap(int *a, int *b)
{
	int hold = *a;
	*a = *b;
	*b = hold;
}

/**
 * sort - sorts
 * @array: array
 * @size: size
 * Return: void
 */
void sort(int *array, size_t begin, size_t end, size_t size)
{
	int index;

	if ((int)begin >= (int)end)
		return;

	index = part(array, begin, end, size);

	sort(array, begin, index - 1, size);
	sort(array, index + 1, end, size);
}
/**
 * part - partitions array
 * @array: array
 * @begin: 0
 * @end: size - 1
 * @size: size
 * Return: void
 */
int part(int *array, size_t begin, size_t end, size_t size)
{
	int pivot = array[end];
	size_t i = begin;
	size_t start;

	for (start = begin; start < end; start++)
	{
		if (array[start] < pivot)
		{
			if (i != start)
			{
				swap(&array[i], &array[start]);
				print_array(array, size);
			}
			i++;
		}
	}
	if (array[end] < array[i])
	{
		swap(&array[i], &array[end]);
		print_array(array, size);
	}
	return (i);
}
