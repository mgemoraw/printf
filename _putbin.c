#include "main.h"
/**
* _putbin - puts binary form of an integer into stdio
* @n: integer
* Return: returns nothing
*/
void _putbin(unsigned int n)
{
	if (n > 1)
		_putbin(n / 2);
	_putchar(n % 2 + '0');
	return;
}