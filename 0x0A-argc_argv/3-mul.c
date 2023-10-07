#include<stdlib.h>
#include<stdio.h>

/**
 * main - mult of 2 numbs
 * @argc: number of args
 * @argv: array of args
 * Return: 0-success, 1-error
 */

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int res;

		res = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", res);
	}
	return (0);
}
