#include "main.h"
/**
 * print_alphabet_x10 - function to print chars
 *
 * returne = 0
 */
	void print_alphabet_x10(void)
{
	int i = 0;

	while (i <= 10)
	{
	for (char b = 'a' ; b <= 'z' ; b++)
	{
	_puchar(b);
	return (0);
	}
	_putchar("\n");
	i++;
	return (0);
	}
}
