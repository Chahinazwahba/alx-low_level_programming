#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: value
 * @index: is the index, starting from 0 of the bit you want to get
 * Return: the value of the bit at index, or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	/* shift n left (index)-times then & 0001 */
	int value = (n >> index) & 1;

	/* an error occurs */
	if (index > 62)
		return (-1);

	return (value);
}
