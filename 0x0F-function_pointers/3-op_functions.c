#include "function_pointers.h"
#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - return sum
 * @a: number 1
 * @b: number 2
 * Return: the sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - return difference
 * @a: number 1
 * @b: number 2
 * Return: the difference
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - return mul
 * @a: number 1
 * @b: number 2
 * Return: the multiplication
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - return division
 * @a: number 1
 * @b: number 2
 * Return: the div
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - return remainder
 * @a: number 1
 * @b: number 2
 * Return: the remainder
 */

int op_mod(int a, int b)
{
	return (a % b);
}
