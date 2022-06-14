#ifndef SORT_H
#define SORT_H

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void bubble_sort(int *array, size_t size);
void print_array(const int *array, size_t size);
void insertion_sort_list(listint_t **list);
void print_list(const listint_t *list);
void _intercambio(int *uno, int *dos);
void insertion_sort_list(listint_t **list);
void *_cambio(listint_t **h, listint_t *aux, listint_t *previo);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
int _lomuto(int *array, size_t size, int inicio, int final);
void _recursion(int *array, size_t size, int inicio, int final);
#endif
