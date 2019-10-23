#include "3-calc.h"

/**
 *op_add - adds two numbers
 *
 *@a: first number to be added
 *@b: second number to be added
 *
 *Return: the result of the operation
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - subtracts two numbers
 *
 *@a: first number to be subtracted
 *@b: second number to be subtacted
 *
 *Return: the result of the operation
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_mul - multiplies two numbers
 *
 *@a: first number to be multiplied
 *@b: second number to be multiplied
 *
 *Return: the result of the operation
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *op_div - divides two numbers
 *
 *@a: first number to be divided
 *@b: second number to be divided
 *
 *Return: the result of the operation
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 *op_mod - gets the remainder of the division between two numbers
 *
 *@a: first number to be divided
 *@b: second number to be divided
 *
 *Return: the result of the operation
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
