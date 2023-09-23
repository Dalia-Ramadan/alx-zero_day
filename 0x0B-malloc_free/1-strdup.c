#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *DDD;
	int X, R = 0;

	if (str == NULL)
		return (NULL);
	X = 0;
	while (str[X] != '\0')
		X++;

	DDD = malloc(sizeof(char) * (X + 1));

	if (DDD == NULL)
		return (NULL);

	for (R = 0; str[r]; R++)
		DDD[R] = str[R];

	return (DDD);
}

