#include "main.h"

/**
 * get_endianness - this checks the endianness
 *
 * Return: 0 if its a big endian, 1 if its a little endian
 */
int get_endianness(void)
{
	unsigned int a;
	char *c;

	a = 1;
	c = (char *) &a;

	return ((int)*c);
}
