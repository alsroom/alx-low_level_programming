#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10
 * followed by a new line
 * Return: returns 0
 */

int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		printf("%d \n", n);
	}
	return (0);
}