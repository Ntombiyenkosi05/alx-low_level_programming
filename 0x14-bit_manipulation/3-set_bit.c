#include "main.h"

/**
 * set_bit - set the bit at a certain index to 1
 *
 * @n: number whose bit is to be set
 * @index: index where value is to be changed to 1
 *
 * Return: 1 on success and -1 on failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n |= mask;
	return (1);
}
