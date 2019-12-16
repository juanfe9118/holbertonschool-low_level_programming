#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
  * main - entry point
  * Description: creates a random key for program 101_crackme
  * Return: always 0
  */
int main(void)
{
	    int sum, i, r;

		char decode[27] = "abcdefghijklmnopqrstuvwxyz";
		char key[30];

		sum = 0;
		i = 0;

		srand(time(NULL));

		while (sum < 2772)
		{
			r = rand() % 10;
			key[i] = decode[r];
			sum += key[i];
			i++;
		}
		r = 2772 - sum;
		key[i] = r;
		printf("%s\n",  key);
		return (0);
}
