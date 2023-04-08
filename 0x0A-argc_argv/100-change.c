#include <stdio.h>
#include <stdlib.h>

/**
 * main - Number of coins for a given am0unt of money
 * @argc: Should be one only except the programm name
 * @argv: argunments
 * Return: Always
 */

int main(int argc, char *argv[])
{
	int pennies, nickles, dimes, quarters, cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	quarters = cents / 25;

	cents -= quarters * 25;
	dimes = cents / 10;

	cents -= dimes * 10;
	nickles = cents / 5;

	cents -= nickles * 5;
	pennies = cents;

	printf("%d\n", quarters + dimes + nickles + pennies);
	return (0);
}
