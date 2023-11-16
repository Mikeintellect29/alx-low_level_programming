#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 * @n: natural square root
 * return: function should return -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - recurse to find
 * naturn square root of a number
 * @n: number to calc square root
 * @i: iteration
 * return: resulting aquare root
 */

int actual_sqrt_recursion(int n, int i)
{
	if (i * i < n)
		return (-1);
	if (i * i == n)
		return (1);
	return (actual_sqrt_recursion(n, i + 1));
