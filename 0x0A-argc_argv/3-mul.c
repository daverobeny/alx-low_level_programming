#include "main.h"

/**
 * main - Multiplies two numbers and prints the result.
 * @argc: The number of arguments.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success, 1 on error.
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		return (1);
	}

	num1 = (argv[1]);
	num2 = (argv[2]);
	result = num1 * num2;

	/* Handle negative result */
	if (result < 0)
	{
		_putchar('-');
		result = -result;
	}

	if (result == 0)
	{
		_putchar('0');
	}
	else
	{
		/* Calculate and print digits one by one */
		int divisor = 1;
		while (divisor <= result / 10)
		{
			divisor *= 10;
		}

		while (divisor > 0)
		{
			int digit = (result / divisor) % 10;
			_putchar('0' + digit);
			divisor /= 10;
		}
	}

	_putchar('\n');

	return (0);
}
