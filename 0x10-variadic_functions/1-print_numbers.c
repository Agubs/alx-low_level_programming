#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - a function that prints numbers,
 * followed by a new line
 * @separator: is the string to be printed between numbers
 * @n: number to be separated
 * @...: A variable number of numbers to be printed
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int indexer;

	va_start(nums, n);

	for (indexer = 0; indexer < n; indexer++)
	{
		printf("%d", va_arg(nums, int));
		if (indexer != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(nums);
}
