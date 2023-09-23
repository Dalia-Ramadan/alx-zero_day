#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - create array of size and assign char c
 * @size: size of array
 * @c: char to assign
 * return: pointer to array, NULL if fail
 */
char *create_array(unsigned int size, char c)
{
	char *S ;
	unsigned int X ;
	S = malloc(sizeof(char) * size);
	if (size == 0 || S == NULL)
		return (NULL);

	for (X = 0; X < size; X++)
		S[X] = c ;
	return(S);
}
