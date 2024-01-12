i#include <stdio.h>

/**
 * main - a program that prints its name, followed by a new line.
 * @argc: count the number of argument
 * @argv: list the number of array  argument
 * return:return (0) when successful
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
