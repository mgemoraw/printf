#include "main.h"
/**
* _putint - prints integer into the stdio
* @arg: integer argument
* Return: returns noting
*/
void _putnum(int arg)
{
    if (arg > 9)
        _putnum(arg / 10);
    _putchar(arg % 10 + '0');
}

/*
int j = 0, i = 10;
    while (arg % 10 != 0)
    {
        i*= 10;
        j++;
    }

    while (i >= 10)
    {
        _putchar(arg / i);
        i /= 10;
    }
    return (j);
*/
