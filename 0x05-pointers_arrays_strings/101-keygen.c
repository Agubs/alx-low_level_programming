#include "main.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 */
int maiin(void)
{
	int num;

	srand(time(0));
	num = rand();
	printf("%i\n", num);
	return (0);
}
