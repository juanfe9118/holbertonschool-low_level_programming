# include <stdio.h>

/**
 *main - beginning of program
 *
 *Description: prints all single digit numbers separated by commas
 *
 *Return: 0
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar((n % 10) + '0');
		if (n < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
