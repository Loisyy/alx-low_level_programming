include "main.h"

/**
 * Description: set_bit - sets the value of a bit to 1 at a given index.
 * @n: pointer to the number to change
 * @index: index of the bit to set to 1
 * Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return ( -1);
	}

	unsigned long int mask = 1UL << index;
	*n |= mask;

	return (1);
}
