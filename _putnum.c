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

