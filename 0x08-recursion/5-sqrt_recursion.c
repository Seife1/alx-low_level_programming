#include "main.h"

int _sqrt(int n, int i);
/**
 * _sqrt_recursion - Squareroot of a number
 * @n: number
 * Return: always
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - calculate square root
 * @n: number
 * @i: for iteration
 * Return: Always
 */

int _sqrt(int n, int i)
{
	if ((i * i) > n)
		return (-1);
	if ((i * i) == n)
		return (i);
	return (_sqrt(n, i + 1));
}
