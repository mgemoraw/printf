#include "main.h"
/**
* _putnum - prints integer into the stdio
* @arg: integer argument
* Return: returns noting
*/
void _putnum(int arg)
{
if (arg > 9)
{
_putnum(arg / 10);
}
_putchar(arg % 10 + '0');
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
*put_uint - prints unsigned integer
* @arg: parameter
* Return: returns nothing
*/
void put_uint(unsigned int arg)

{
if (arg > 9)
{
put_uint(arg / 10);
}
_putchar(arg % 10 + '0');
}


