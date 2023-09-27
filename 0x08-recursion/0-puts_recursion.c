#include "main.h"

/**
 * _puts_recursion - Prints a string using recursion
 *
 * @s: Pointer to the string to be printed
 *
 * Description: This function recursively prints each character
 * of the string pointed to by 's' followed by a newline character.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
