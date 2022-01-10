/*
 * File: 100-shell_sort.c
 * Author: Waython Yesse
 * Occupation: Software Engineering Student at ALX
 * Address: waythonny@yahoo.com
 * Year: 2022 January 10
 * ** HAPPY NEW YEAR, HAPPY NEW CODE **
 */

#include "sort.h"

/**
 * shell_sort - sorts shelly like
 * @array: array to take in
 * @size: size of array
 *
 */

void shell_sort(int *array, size_t size)
{
	size_t gap = 1, idx, jdx;
	int temp;

	if (array == NULL || size < 2)
		return;

	while (gap < size / 3)
		gap = (gap * 3) + 1;

	while (gap)
	{
		for (idx = gap; idx < size; idx++)
		{
			temp = array[i];
			for (jdx = idx; jdx >= gap && array[jdx - gap] > temp; jdx -= gap)
			{
				array[jdx] = array[jdx - gap];
			}
			array[jdx] = temp;
		}
		print_array(array, size);
		gap /= 3;
	}
}
