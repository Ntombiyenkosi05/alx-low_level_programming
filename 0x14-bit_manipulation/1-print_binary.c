#include "main.h"

/**
 * print_binary - print the binary representation of a number
 *
 * @n: number to be printed in binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int flag = 0;

	while (mask != 0)
	{
		if ((n & mask) != 0)
		{
			flag = 1;
			putchar('1');
		}
		else if (flag == 1 || mask == 1)
			putchar('0');
		mask >>= 1;
	}
}
