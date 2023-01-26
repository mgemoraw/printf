#include "main.h"

/*put_int, put_percent, put_char, put_uint, put_str*/

/**
* put_int - prints decimal numbers
* @args: passed argument
* Return: returns number of decimals printed
*/
int put_int(va_list args)
{
int num = va_arg(args, int);
return (_putnum(num));
}
/**
* put_percent- prints modulo operator
* @args: passed argument
* Return: returns number of chars printed
*/
int put_percent(va_list args)
{
char c = va_arg(args, int);
/* return (write(1, "%", 1));*/
_putchar('%');
return (c);

}

/**
* put_char - prints characters
* @args: input args
* Return: returns int
*/
/*int put_char(va_list args, char buffer[], int flags, int width, int precision, int size)*/
int put_char(va_list args)
{
char c = va_arg(args, int);

return (write(1, &c, 1));
}
/**
*put_uint - prints unsigned integer
