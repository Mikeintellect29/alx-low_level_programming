#include <stdio.h>
/**
 * main -  program that prints all arguments it receives
 * @argc : print the number of command line argument
 * @argv : print thr array of commsand line argument
 * Return : (0) successful
 */

int main (int argc , char **argv)

{
	int i;
	(void)argc;

	for(i = 0; i < argc; i++)
	{

	printf("%s\n", argv[i]);
	}
	return 0;
	}
