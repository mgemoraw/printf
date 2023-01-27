#include "main.h"

/*put_int, put_percent, put_char, put_uint, put_str*/

/**
* put_int - prints decimal numbers
* @args: passed argument
* Return: returns number of decimals printed
*/
int put_int(va_list args, char buffer[], int flag, int width, int precision, int size)
{
   
int num = va_arg(args, int);

    (void)buffer;
    (void)flag;
    (void)width;
    (void)precision;
    (void)size;

if (num < 0)
    return (print_negative(num));

else
    return (_putnum(num));
}
/**
* put_percent- prints modulo operator
* @args: passed argument
* Return: returns number of chars printed
*/
int put_percent(va_list args, char buffer[], int flag, int width, int precision, int size)
{

char c = va_arg(args, int);
    (void)buffer;
    (void)flag;
    (void)width;
    (void)precision;
    (void)size;

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
int put_char(va_list args, char buffer[], int flag, int width, int precision, int size)
{
    char c = va_arg(args, int);

    (void)buffer;
    (void)flag;
    (void)width;
    (void)precision;
    (void)size;


return (write(1, &c, 1));
}
/**
*put_uint - prints unsigned integer
* @args: parameter
* Return: returns nothing
*/
int put_uint(va_list args, char buffer[], int flag, int width, int precision, int size)
{
unsigned int arg = (unsigned int)va_arg(args, int);

    (void)buffer;
    (void)flag;
    (void)width;
    (void)precision;
    (void)size;

return (print_unsigned(arg));
}

/**
* put_str - prints strings
* @args: input argument
* Return: returns length of string printed
*/
int put_str(va_list args, char buffer[], int flag, int width, int precision, int size)
{
    char *str;

    (void)buffer;
    (void)flag;
    (void)width;
    (void)precision;
    (void)size;
    
str = va_arg(args, char *);
return (_puts(str));
}
