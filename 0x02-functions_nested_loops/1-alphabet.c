#include "main.h"

/**
 * print_alphabet - prints all alphabet in lower case
 * followed by new line
 */

void print_alphabet(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		_putchar(alph);
	}
	_putchar('\n');
}
