#include "main.h"

/**
 * print_alphabet_x10 - prints the lowercase alphabets 10 times
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{	
			_putchar(j);
		}
		_putchar('\n');
	}
}
