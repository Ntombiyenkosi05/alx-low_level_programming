#include "main.h"

/**
 * clear_bit - set the bit at a given index to 0
 *
 * @n: number whose bits are to be shifted
 * @index: index where bit is to be shifted
 *
 * Return: 1 on success and -1 on failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = ~(1UL << index);

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n &= mask;
	return (1);
}
