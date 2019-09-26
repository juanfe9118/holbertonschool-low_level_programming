#include <stdio.h>

/**
 *main - Beginning of program
 *
 *Description: prints the numbers from 1 to 100 but the multiples of 3 will
 *print "Fizz" instead. Likewise the multiples of 5 will print "Buzz" instead,
 *the multiples of both 3 and 5 will print "FizzBuzz"
 *
 *Return: 0
 */
int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (x % 3 == 0 && x % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (x % 3 == 0)
		{
			printf("Fizz");
		}
		else if (x % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", x);
		}
		if (x != 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
