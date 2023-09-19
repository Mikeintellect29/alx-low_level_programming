#include "main.h"

/**
 * swap_int - Swapping the values of two integer
 * @a: Output
 * @b: Output
 * Return: Always 0
 */


void swap_int(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
