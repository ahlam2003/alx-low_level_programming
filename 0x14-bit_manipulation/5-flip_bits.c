#include "main.h"
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bits = 0;
			unsigned int i;
	for (i = 0; i < sizeof(unsigned long int) * 8; i++)
	{
		if (xor & (1UL << i))
		bits++;
	}

	return (bits);
}
