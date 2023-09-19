#include "main.h"

/**
 * _strlen - A function that returns the length of a string
 * description: output
 * @s: output
 * Return: Always 0
 */

int _strlen(char *s)
{
	int lenght = 0;

	while (*s |= '\0')
		lenght++;
	s++;
	return (lenght);
}
