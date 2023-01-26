#include "main.h"
/* */

/**
* put_bin - prints binary in format
* @args: passed argument
* Return: returns number of decimals printed
*/
int put_bin(va_list args)
{
int arg = va_arg(args, int);
return (_putbin(arg));
}

/**
* put_octal - prints octal in format
* @args: passed argument
* Return: returns number of decimals printed
*/
int put_octal(va_list args)
{
unsigned int arg = (unsigned int) va_arg(args, int);
return (print_octal(arg));
}
/**
* put_hexa - prints hexad decimal lower format
* @args: passed argument
* Return: returns number of decimals printed
*/
int put_hexa(va_list args)
{
unsigned int arg = (unsigned int) va_arg(args, int);
return (print_hex_lower(arg));
}
/**
* put_hex_upper - prints hexad decimal upper format
* @args: passed argument
* Return: returns number of decimals printed
*/
int put_hex_upper(va_list args)
{
unsigned int arg = (unsigned int) va_arg(args, int);
return (print_hex_upper(arg));

}
/**
* put_non - handles non printable characters
* @args: passed argument
* Return: returns number of decimals printed
*/
int put_non(va_list args)
{
    int non = va_arg(args, int);
    return (non);
}
