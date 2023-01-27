#include "main.h"

/****custome functions****/

/**
* _putnum - prints integer into the stdio
* @arg: integer argument
* Return: returns noting
*/
int _putnum(int arg)
{
if (arg > 9)
{
_putnum(arg / 10);
}
return (_putchar(arg % 10 + '0'));
}
/**
*print_negative - prints negative integer
*@arg: given parameter
*Return: returns nothing
*/
void print_negative(signed int arg)
{
if (arg >= 0)
{
arg = arg;
_putnum(arg);
}
if (arg < 0)
{
_putchar('-');
arg = _ABS(arg);
_putnum(arg);
}
}

/**
* _putbin - puts binary form of an integer into stdio
* @n: integer
* Return: returns nothing
*/
int _putbin(unsigned int n)
{
	if (n > 1)
		_putbin(n / 2);
	return (_putchar(n % 2 + '0'));
}

/**
* print_hex_lower - prints number in hex format
* @n: integer
* Return: returns hex form of number
*/
int print_hex_lower(unsigned int n)
{
if (n > 16)
{
print_hex_lower(n / 16);
}
return (hex_lower(n % 16));

}
/**
* print_hex_upper - prints number in hex format
* @n: integer
* Return: returns hex form of number
*/
int print_hex_upper(unsigned int n)
{
if (n > 16)
{
print_hex_upper(n / 16);
}
return (hex_upper(n % 16));

}
