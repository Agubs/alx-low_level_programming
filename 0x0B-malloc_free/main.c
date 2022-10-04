#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - executes the program
 * Return: Always 0
 */

int main(void)
{
	char *buffer;

	buffer = create_array(98, 'H');
	if (buffer == NULL)
	{
		printf("Failed to allocate memory\n");
		return (1);
	}
	free(buffer);
	return (0);
}
