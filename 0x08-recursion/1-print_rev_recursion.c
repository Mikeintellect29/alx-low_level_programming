#include "main.h"
/*
 *  _print_rev_recursion - Print  a spring in reverse
 *  description: print the character of a spring
 *  in reverse
 *  @s: pointer to a spring
 *  return: Always 0
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
	return;
	}
	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);


}
