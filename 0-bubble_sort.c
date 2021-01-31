#include "sort.h"
/**
 * bubble_sort - makes bubbles
 * @array: assortment of high impact bubbles
 * @size: of varrying size of course
 * Return: natta
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	if (!array)
	return;

	for (i = 0; i < size - 1; ++i)
	{
		for (j = 0; j < size - 1; ++j)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
			}
		}
	}
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
