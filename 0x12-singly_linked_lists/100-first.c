#include <stdio.h>

void constr(void) __attribute__ ((constructor));

/**
 * constr - prints a sentence before the main
 * function is executed
 */
void constr(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
