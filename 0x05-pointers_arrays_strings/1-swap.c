#include <stdio.h>
/**
 * swap_int - Swaps the values of two integers
 * @a: First integer to be swapped
 * @b: Second integer to be swapped
 * Return: Nothing
 */
void swap_int(int *a, int *b)
	/* Function that swaps the values of two integers. */
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
