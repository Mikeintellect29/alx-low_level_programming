#include "main.h"

/**
 * _puts_recursion -  recursive function to print
 * @s: print a spring
 * Return: return zero
 */

void _puts_recursion(char *s)

{
	if (*s == '\0')
	{
		_putchar('\n');
	return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
