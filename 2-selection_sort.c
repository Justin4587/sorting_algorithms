#include "sort.h"
/**
 * selection_sort - more sorting
 * @array: an array
 * @size: size of
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	unsigned int runner, swap, i;
	int temp;

	if (!array)
		return;

	for (runner = 0; runner < size - 1; runner++)
	{
		i = runner;
		for (swap = runner + 1; swap < size; swap++)
			if (array[swap] < array[i])
				i = swap;
			if (i != runner)
			{
				temp = array[i];
				array[i] = array[runner];
				array[runner] = temp;
				print_array(array, size);
			}
	}
}
