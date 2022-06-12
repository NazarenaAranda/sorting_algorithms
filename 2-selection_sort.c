#include "sort.h"
/**
 * _intercambio - intercambiar 2punteros(marcan posiciones)
 * @uno: primer puntero
 * @dos: segundo puntero
 */
void _intercambio(int *uno, int *dos)
{
	int temp;

	temp = *uno;
	*uno = *dos;
	*dos = temp;
}

/**
 * selection_sort - ordenar array utilizando Selection sort
 * @array: donde estan los enteros a imprimir
 * @size: numero de elemenetos de la array
 */

void selection_sort(int *array, size_t size)
{
	size_t recorrer, comparar, cambios;

	for (recorrer = 0; recorrer < size - 1; recorrer++)
	{
		comparar = recorrer;
		
		for (cambios = recorrer + 1; cambios < size; cambios++)
			if (array[cambios] < array[comparar])
				comparar = cambios;

		_intercambio(&array[cambios + 1], &array[cambios]);

		if (comparar != recorrer)
			print_array(array, size);
	}
}


