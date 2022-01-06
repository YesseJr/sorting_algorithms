/*
 * File: 0-bubble_sort.c
 * Author: Waython Yesse
 * Occupation: Software Engineering Student at ALX
 * Address: waythonny@yahoo.com
 * Year: 2022 January 06
 * ** HAPPY NEW YEAR, HAPPY NEW CODE **
 */

#include "sort.h"

/**
 * bubble_sort - bubble sorting of an array of integers in ascending order
 * @array - array to be sorted
 * @size - size_t variable representing the size of an array
 * 
 * Description: Print ana array each after the swap of two elements
 */

void bubble_sort(int *array, size_t size);
{
    size_t idx, coding = size;
    int temp, swap;

    if (array == NUL || size == 0 || size == 1)
            return;

    while (coding)
        {
            swap = 0;
            for (idx = 0; idx < coding; idx++)
               {
                   if (array[idx] > array[idx + 1])
                      {
                          temp = array[idx + 1];
                          array[idx + 1] = array[idx];
                          array[idx] = temp;
                          print_array(array, size);
                          swap = 1
                      }
               }
               coding--;
               if (!swap)
                       break,
        }
}
