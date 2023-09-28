#include "main.h"

/**
 * clear_bit - sets the v
 * @n: pointer to the number to change
 * @index: index of the bit
 *
 * Return: 1 for success, -1 for fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
