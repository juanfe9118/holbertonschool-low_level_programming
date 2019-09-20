# include <stdio.h>

/**
 *main - beginning of program
 *
 *Description: prints number base 16 followed by a blank line
 *
 *Return: 0
 */
int main(void)
{
	char n;
	char a;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	for (a = 'a'; a <= 'f'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
