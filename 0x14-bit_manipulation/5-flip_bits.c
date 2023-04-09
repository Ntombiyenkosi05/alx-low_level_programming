#include "main.h"

/**
 * flip_bits - find how many bits need be flipped to get another number
 *
 * @n: first number in bit comparison
 * @m: second number in bit comparison
 *
 * Return: Number of bits to be flipped to get same number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int diff = n ^ m;

	while (diff)
	{
		count += diff & 1;
		diff >>= 1;
	}
	return (count);
}
