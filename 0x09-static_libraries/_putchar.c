#include <unistd.h>
/**
 * _putchar - Writes the charecter c to stdout
 * @c: The charecter to ptint
 * Return: 1 (Success)
 * else: -1 on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
