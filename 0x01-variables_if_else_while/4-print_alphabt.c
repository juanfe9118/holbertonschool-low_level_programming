# include <stdio.h>

/**
 *main - beginning of program
 *
 *Description: prints the alphabet followed by a blank line but will not print
 *'q' or 'e'
 *
 *Return: 0
 */
int main(void)
{
	char abc;

	for (abc = 'a'; abc <= 'z'; abc++)
	{
		if (abc != 'e' && abc != 'q')
		{
			putchar(abc);
		}
	}
	putchar('\n');
	return (0);
}
