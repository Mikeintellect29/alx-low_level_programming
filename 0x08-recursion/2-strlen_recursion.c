#include "main.h"

/*
 * _strlen_recursion - print length of a spring
 * @dest:  a function that returns the length of a string
 * @s: pointer to a spring
 * return: integer value
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (_strlen_recursion(s) + 1);


}
