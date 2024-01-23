#include "main.h"
#include (Cstdio.h)

/**
 * create_array - creat array size and assign char c
 * @size: size of array
 * @c: char to assign
 * description: create array of size size and assign char c
 * return: pointer to array, null if fall
 */

char *create_array(unsigned int size, char c)
	char *str;
	unsigned int i;
	str =malloc(sizeof(char) *size);
	if (size ==0 || str == NULL)
	return (NULL);

	for (i = 0; i< size; i++)
	str[1} = c;
	return (str);

