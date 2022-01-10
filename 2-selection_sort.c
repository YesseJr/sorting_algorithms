/*
 * File: 1-insertion_sort.c
 * Author: Waython Yesse
 * Occupation: Software Engineering Student at ALX
 * Address: waythonny@yahoo.com
 * Year: 2022 January 10
 * ** HAPPY NEW YEAR, HAPPY NEW CODE **
 */

#include "sort.h"

/**
 * selection_sort - sorts all selecty like
 * @array: array to sort
 * @size: size of array
 */

void selection_sort(int *array, size_t size)
{
	int index = 0, min, tmp;
	size_t i, j;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min = array[i];
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < min)
			{
				min = array[j];
				index = j;
			}
		}
		if (min != array[i])
		{
			tmp = array[i];
			array[i] = array[index];
			array[index] = tmp;
			print_array(array, size);
		}
	}
}
