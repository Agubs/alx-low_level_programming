#include <stdio.h>

/**
 * main - prints the alphabeth in lowercase,
 * followed by a new line
 * Return: Always 0 (Succss)
 */

int main(void)

{
	char ch = 'a';
	
	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}		}
		ch++;
	}
	putchar('\n');
	return (0);
}

