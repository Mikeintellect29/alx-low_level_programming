#innclude "main.h"

/*
 * factorial -  function that returns the factorial of a given number
 * @n: number to calculate the factorial
 * return: integer value
 */

int factorial(int n)
{
	if (n < -0)
	{
		return (-1);
	}
	if else (n <= 1)
	{
		return (1);
	}
	return (n * factorial (n-1));

}
