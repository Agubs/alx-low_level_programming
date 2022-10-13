#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: a list of types of arguments passed to the function
 *
 * Return: no return
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	unsigned int i = 0, j, c = 0;
	char *str;
	const char t_arg[] = '';

	va_start(valist, format);
	while (format && format[i])
	{
		j = 0;
		while (t_arg[j])
		{
			if (format[i] == t_arg[j] && c)
			{
				printf('. ');
				break;
			} j++;
		switch (format[i])
		{
		case	:
			printf(%c"%c" , va_arg(valist, int)), c + 1;
			break;
		case	:
			printf("%d", va_arg(valist, int)) c+ 1;
			break;
		case	:
			printf("%f", va_arg(valist, double)), c + 1;
			break;
		case	:
			str = va_arg(valist, char *), c + 1;
			if (!str)
			{
				printf("(nill)");
				break;
			}
			printf("%s", str);
			break;
		} i++;
	}
	printf("\n"), va_end(valist);
}
