#include "sort.h"
/**
 * selection_sort - ordenar array utilizando Selection sort
 * @array: donde estan los enteros a imprimir
 * @size: numero de elemenetos de la array
 * Return: void
*/
void selection_sort(int *array, size_t size)
{
	size_t recorrer, comparar, cambios, aux;

	if (size <= 1)
		return;

	for (recorrer = 0; recorrer < size - 1; recorrer++)
	{
		comparar = recorrer;
		
		for (cambios = recorrer + 1; cambios < size; cambios++)
			if (array[cambios] < array[comparar])
				comparar = cambios;

		aux = array[recorrer];
		array[recorrer] = array[comparar];
		array[comparar] = aux;

		if (comparar != recorrer)
			print_array(array, size);
	}
}


