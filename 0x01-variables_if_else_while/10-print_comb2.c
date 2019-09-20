# include <stdio.h>

/**
 *main - beginning of program
 *
 *Description: prints the digits from 00 to 99 separated by commas
 *
 *Return: 0
 */
int main(void)
{
	int n1;
	int n2;

	for (n1 = 0; n1 < 10; n1++)
	{
		for (n2 = 0; n2 < 10; n2++)
		{
			putchar((n1 % 10) + '0');
			putchar((n2 % 10) + '0');
			if (n1 != 9 || n2 != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
