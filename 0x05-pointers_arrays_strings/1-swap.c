#include "main.h"

/**
 * swap_int - swap the values of two integers a and b
 *@a: A Pointer to an int that will be updated
 *@b: B Pointer to an int that will be updated
 *Return: (0)
 */

void swap_int(int *a, int *b)
{
	int f;
	f = *a;

	*a = *b;
	*b = f;
}
