#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 * reset_to_98 - to be good
 * Return: Always 0.
 */
	int main(void)
{
	int n;

	n = 402;
	printf("n=%d\n", n);
	reset_to_98(&n);
	printf("n=%d\n", n);
	return (0);
}
	void reset_to_98(int *n)
{
	int k = *n;
	*n = 98;
	return (0);
}
