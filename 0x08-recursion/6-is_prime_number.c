#include "main.h"

int check_prime(int n, int i);
/**
 * is_prime_number - return 1 if it is
 * @n: given number
 * Return: always
 */

int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 * check_prime - Is the number prime
 * @n: num to be checked
 * @i: for iteration
 * Return: always
 */

int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);

	if (n % i == 0 && i > 1)
		return (0);

	if ((n / i) < i)
		return (1);

	return (check_prime(n, i + 1));
}
