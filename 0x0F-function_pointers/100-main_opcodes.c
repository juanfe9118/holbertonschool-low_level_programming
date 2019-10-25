#include <stdio.h>
#include <stdlib.h>

/**
 *main - entry point
 *Description: program that prints its own opcodes in two digit hexadecimal
 *lowercase format
 *@argc: argument count
 *@argv: argument vectors
 *Return: 0
 */
int main(int argc, char **argv)
{
	int n, i;
	int (*ptr)(int, char **);

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	ptr = &main;
	for (i = 0; i < n; i++)
		printf("%.2x ", *((unsigned char *)(ptr + i)));
	printf("\n");
	return (0);
}
