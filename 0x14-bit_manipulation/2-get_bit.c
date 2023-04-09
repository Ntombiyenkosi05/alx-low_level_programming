#include "main.h"

/**
 * get_bit - get the bit at a given index
 *
 * @n: number to be converted to bit
 *
 * @index: index of bit to be returned
 *
 * Return: bit found at given index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	if ((n & mask) == 0)
		return (0);
	else
		return (1);
}
