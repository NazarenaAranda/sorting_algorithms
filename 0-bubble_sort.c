#include "sort.h"

/**
 * bubble_sort - ordenar una array de integers
 * @array: donde estan los enteros
 * @size: tamaño
 */

void bubble_sort(int *array, size_t size)
{
	int rec, rec2, aux;

	for (rec = 0; rec < 10; rec++)
	{
		for (rec2 = 0; rec2 < 10; rec2++)
		{
			if (array[rec2] > array[rec2 +1])
			{
				aux = array[rec2 + 1];
				array[rec2 + 1] = array[rec2];
				array[rec2] = aux;
			}
		}
	}
	print_array(array, size);
}



