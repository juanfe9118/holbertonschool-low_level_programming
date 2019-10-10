#include "holberton.h"

/**
 *get_prime - finds if a number is prime or not
 *
 *@p: number that will be evaluated
 *@v: variable that will test if @p is prime
 *
 *Return: 1 if @p is prime, 0 otherwise
 */
int get_prime(int v, int p)
{
	if (p == v)
		return (1);
	else if (p % v == 0)
		return (0);
	else
		return (get_prime(v + 1, p));
}

/**
 *is_prime_number - tells whether a number is prime or not
 *
 *@n: number to get evaluated
 *
 *Return: 1 if @n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	if (n == 2)
		return (1);
	return (get_prime(2, n));
}
