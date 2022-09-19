#include "main.h"

/**
 * _strlen - length og a string
 *@s: A pointer to an int that will be updated
 *
 * REturn: (0)
 */

int _strlen(char *s)
{
	int u;

	u = 0;
	while (s[u] != '\0')
	{
		u++;
	}
	return (u);
}
