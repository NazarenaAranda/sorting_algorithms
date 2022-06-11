#include "sort.h"

/**
 * bubble_sort - ordenar una array de integers
 * @array: donde estan los enteros
 * @size: tamaño
 */

void bubble_sort(int *array, size_t size)
{
	int recorrido, cambios, aux;

	for (recorrido = 0; recorrido <= 9; recorrido++)
	{
		for (cambios = 0; cambios <= 9; cambios++)
		{
			if (array[cambios] > array[cambios + 1])
			{
				aux = array[cambios + 1];
				array[cambios + 1] = array[cambios];
				array[cambios] = aux;
				print_array(array, size);
			}
		}
	}
}



