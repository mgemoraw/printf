#include "main.h"
/* */

/**
* put_bin - prints binary in format
* @args: passed argument
* @buffer: buffer text
* @flag: flag specifier
* @width: width specifer
* @precision: precision specifer
* @size: size specifer
* Return: returns number of decimals printed
*/
int put_bin(va_list args, char buffer[], int flag,
int width, int precision, int size)
{
	int arg = va_arg(args, int);

	(void)buffer;
	(void)flag;
	(void)width;
	(void)precision;
	(void)size;

	return (_putbin(arg));
}

/**
* put_octal - prints octal in format
* @args: passed argument
* @buffer: buffer text
* @flag: flag specifier
* @width: width specifer
* @precision: precision specifer
* @size: size specifer
* Return: returns number of decimals printed
*/
int put_octal(va_list args, char buffer[], int flag,
int width, int precision, int size)
{
	unsigned int arg = (unsigned int) va_arg(args, int);

	(void)buffer;
	(void)flag;
	(void)width;
	(void)precision;
	(void)size;

	return (print_octal(arg));
}
/**
* put_hexa - prints hexad decimal lower format
* @args: passed argument
* @buffer: buffer text
* @flag: flag specifier
* @width: width specifer
* @precision: precision specifer
* @size: size specifer
* Return: returns number of decimals printed
*/
int put_hexa(va_list args, char buffer[], int flag, int width,
int precision, int size)
{
	unsigned int arg = (unsigned int) va_arg(args, int);

	(void)buffer;
	(void)flag;
	(void)width;
	(void)precision;
	(void)size;

	return (print_hex_lower(arg));
}
/**
* put_hex_upper - prints hexad decimal upper format
* @args: passed argument
* @buffer: buffer text
* @flag: flag specifier
* @width: width specifer
* @precision: precision specifer
* @size: size specifer
* Return: returns number of decimals printed
*/
int put_hex_upper(va_list args, char buffer[], int flag,
int width, int precision, int size)
{
	unsigned int arg = (unsigned int) va_arg(args, int);

	(void)buffer;
	(void)flag;
	(void)width;
	(void)precision;
	(void)size;
	return (print_hex_upper(arg));

}
/**
* put_non - handles non printable characters
* @args: passed argument
* @buffer: buffer text
* @flag: flag specifier
* @width: width specifer
* @precision: precision specifer
* @size: size specifer
* Return: returns number of decimals printed
*/
int put_non(va_list args, char buffer[], int flag, int width,
int precision, int size)
{
	int non = va_arg(args, int);

	(void)buffer;
	(void)flag;
	(void)width;
	(void)precision;
	(void)size;
	return (non);
}
