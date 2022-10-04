#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strlen - finds the lenght of a string
 * @s: string
 * Return: 0
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
 * _strcpy - copy string
 * @dest: destroy string
 * @src: source of string
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * _strdup - a function that returns a pointer to a newly
 * allocated space in memory.
 * @str: holds the string value
 * Return: Null if str = NULL
 */

char *_strdup(char *str)
{
	char *dst;
	unsigned int size;

	if (str == 0)
	{
		return (NULL);
	}
	size = _strlen(str) + 1;
	dst = (char *)malloc(size * sizeof(char));
	if (dst == 0)
	{
		return (NULL);
	}
	_strcpy(dst, str);
	return (dst);
}
