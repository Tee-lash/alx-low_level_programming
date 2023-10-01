#include "main.h"

/**
 * flip_bits - to return the number of bits
 * needed to flip to get from one number to another
 * @n: num. one
 * @m: num. two
 *
 * Return: the num. of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int nbits;

	for (nbits = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			nbits++;
	}

	return (nbits);
}
