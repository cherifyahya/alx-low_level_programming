#include <stdio.h>

/**
 * main - alphabet in reverse
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char cr;

	for (cr = 'z'; cr >= 'a'; cr--)
	{
		putchar(cr);
	}
	putchar('\n');
	return (0);
}

