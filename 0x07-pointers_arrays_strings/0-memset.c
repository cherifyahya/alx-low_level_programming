#include "main.h"
/**
 * _memset - fill memory with a specific value
 * @s: pointer
 * @b: the desired value
 * @n: number of bytes to be changed
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (; n > 0; i++, n--)
	{
		s[i] = b;
	}
	return (s);
}
