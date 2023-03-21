#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes char c to stdout
 * @c: charactor to print
 * Return: return 1 when successful
 * return -1 if there is error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
