#include "main.h"
/**
* put_pointer - handles pointers
* @args: passed argument
* @buffer: buffer text
* @flag: flag specifier
* @width: width specifer
* @precision: precision specifer
* @size: size specifer
* Return: returns number of decimals printed
*/
int put_pointer(va_list args, char buffer[], int flag,
int width, int precision, int size)
{
	void *ptr = va_arg(args, void *);
	unsigned long int add = (unsigned long int) ptr;

	(void)buffer;
	(void)flag;
	(void)width;
	(void)precision;
	(void)size;



	if (ptr == NULL)
	{
		return (write(1, "(nil)", 5));
	}
	_puts("0x7ffe");
	return (print_hex_lower(add));
	/* return (write(1, (char *)ptr, 12)); */
}
/**
* put_reverse - handles non revarsed characters
* @args: passed argument
* @buffer: buffer text
* @flag: flag specifier
* @width: width specifer
* @precision: precision specifer
* @size: size specifer
* Return: returns number of decimals printed
*/
int put_reverse(va_list args, char buffer[], int flag,
int width, int precision, int size)
{
	(void)buffer;
	(void)flag;
	(void)width;
	(void)precision;
	(void)size;

	return (va_arg(args, int));

}
/**
* put_rot13_string - handles rot13_string format
* @args: passed argument
* @buffer: buffer text
* @flag: flag specifier
* @width: width specifer
* @precision: precision specifer
* @size: size specifer
* Return: returns number of decimals printed
*/
int put_rot13_string(va_list args, char buffer[], int flag,
int width, int precision, int size)
{
	(void)buffer;
	(void)flag;
	(void)width;
	(void)precision;
	(void)size;

	return (va_arg(args, int));
}

