# include <stdio.h>

/**
 *main - beginning of program
 *
 *Description: prints the alphabet followed by a blank line
 *
 *Return: 0
 */
int main(void)
{
	char abc;

	for (abc = 'a'; abc <= 'z'; abc++)
	{
		putchar(abc);
	}
	putchar('\n');
	return (0);
}
