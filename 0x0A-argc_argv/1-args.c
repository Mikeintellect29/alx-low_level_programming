#include <stdio.h>
/**
 * main - prints the number of arguments passed into it.
 * @argc: number line command argument.
 * @argv: array that contains the command.
 * Return: (0)  when successful.
 */ 
 
int main (int argc, char **argv __attribute__((unused)))
{
printf("%d\n", argc -1 );
  return 0;
}


