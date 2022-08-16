#ifndef SORT_HEADER
#define SORT_HEADER
#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - Doubly linked list node
 * @n: Integer stored in the node
 * @next: Pointer to the next node of the list
 * @prev: Pointer to the previous node of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void swap_int(int *arr, int a, int b);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);
void swap_list(listint_t *pn, listint_t *temp, listint_t *nn, listint_t **h);
void insertion_sort_list(listint_t **list);

void recursive_quick_sort(int *array, size_t size, int start, int end);
size_t partition(int *array, size_t size, int start, int end);

#endif
