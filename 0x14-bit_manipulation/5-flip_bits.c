#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * @n: first number
 * @m: second number
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int cur;
	unsigned long int ex = n ^ m;
	int i, count = 0;

	for (i = 63; i >= 0; i--)
	{
		cur = ex >> i;
		if (cur & 1)
			count++;
	}

	return (count);
}
