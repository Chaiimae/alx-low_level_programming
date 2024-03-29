#include "main.h"

/**
 * flip_bits - Return number of bits that would need to be flipped
 * @n: First number
 * @m: Second number
 * Return: Number of bits to flip to convert numbers
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xorval = n ^ m;
	unsigned int count = 0;

	while (xorval)
	{
		if (xorval & 1ul)
			count++;
		xorval = xorval >> 1;
	}
	return (count);
}
