#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* more headers goes there */
/* Determine if a random number is possitive , negative or zero*/
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive%s\n", n);
	}
	else if (n == 0){
		printf("%d is zero%s\n", n);
	}
	else 
	{
		printf("%d is negative%s\n" n);
	}
	return (0);
}
