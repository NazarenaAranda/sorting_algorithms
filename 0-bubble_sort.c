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
 * bubble_sort - ordenar una array de integers
 * @array: donde estan los enteros a imprimir
 * @size: numero de elementos en la array
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
	long unsigned int recorrido, cambios;

	if (size <= 1)
		return;

	for (recorrido = 0; recorrido < (size - 1); recorrido++)
		for (cambios = 0; cambios < size; cambios++)
			if (array[cambios - 1] > array[cambios])
			{
				_intercambio(&array[cambios - 1], &array[cambios]);
				print_array(array, size);
			}
}
