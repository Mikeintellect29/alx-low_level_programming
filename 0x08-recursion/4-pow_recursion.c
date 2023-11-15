#include "main.h"

/*
 * factorial -  function that  returns the value of x raised to the power of y
 * @x: value to raise
 * @y: power
 * return: the function should return -1
 */

int _pow_recursion(int x, int y)
{
if (y < 0 )
	return (-1);
if (y ==0 )
	return (0);
return (x *_pow_recursion(x, y-1));
}