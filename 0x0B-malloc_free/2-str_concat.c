#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _strlen - prints string lenght
 * @s: string to to be printed
 * Return: 1
 */

int _strlen(char *s)
{
	unsigned int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * str_concat - a funtion that concatenates two strings
 * @s1: string number 1
 * @s2: string number 2
 * Return: NULL on failure and pointer on success
 */

char *str_concat(char *s1, char *s2)
{
	char *fst;
	unsigned int i, j, size;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	size = (_strlen(s1) + _strlen(s2) + 1);

	fst = (char *)malloc(size * sizeof(char));

	if (fst == 0)
	{
		return (NULL);
	}

	for (i = 0; *(s1 + i) != '\0'; i++)
		*(fst + i) = *(s1 + i);

	for (j = 0; *(s2 + j) != '\0'; j++)
	{
		*(fst + i) = *(s2 + j);
		i++;
	}
	return (fst);
}
