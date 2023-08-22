#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line
 */
void print_alphabet_x10(void)
{
	char g;
	int m;

	m = 0;

	while (m < 10)
	{
		g = 'a';
		while (g <= 'z')
		{
			_putchar(g);
			g++;
		}
		_putchar('\n');
		i++;
	}
}

