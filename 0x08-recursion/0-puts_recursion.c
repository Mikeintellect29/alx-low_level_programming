#include "main.h"

/**
 * _puts_recursion - writing a recursive function that print a string
 * @dest: output value
 * Return: return zero
 */

void _puts_recursion(char *s)

{
	if(*s == '\0')
	{
		_putchar('\n');
	return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
