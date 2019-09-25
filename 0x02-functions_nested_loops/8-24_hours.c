#include "holberton.h"

/**
 *jack_bauer - beginning of program
 *
 *Description: prints every minute of a day
 */
void jack_bauer(void)
{
	int hour;
	int min;

	for (hour = 0; hour <= 23; hour++)
	{
		for (min = 0; min <= 59; min++)
		{
			_putchar((hour / 10) + 48);
			_putchar((hour % 10) + 48);
			_putchar(58);
			_putchar((min / 10) + 48);
			_putchar((min % 10) + 48);
			_putchar(10);
		}
	}
}
