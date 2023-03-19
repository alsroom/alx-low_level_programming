#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the alphabe in lowercase, followed by a new line,
 * prints all the letters except q and e
 * Return: returns 0
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
