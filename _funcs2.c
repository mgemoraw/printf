#include "main.h"
/**
*_strlen - returns length of string
* @fmt: input character array
* Return: returns length of string
*/
int _strlen(const char *fmt)
{
	unsigned int len;

	if (fmt == NULL)
	return (0);

	while (*(fmt + len))
	len++;

	return (len);
}

/**
 * is_printable - Evaluates if a char is printable
 * @ch: Char to be evaluated.
 * Return: 1 if c is printable, 0 otherwise
 */
int is_printable(char ch)
{
	if (ch >= 32 && ch < 127)
		return (1);

	return (0);
}


/**
* is_digit - checks if characer is digit
* @c: input character
* Return: 1 if yes, 0 if not
*/
int is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/**
 * append_hexa_code - Append ascci in hexadecimal code to buffer
 * @buffer: Array of chars.
 * @i: Index at which to start appending.
 * @ascii_ch: ASSCI CODE.
 * Return: Always 3
 */
int append_hexa_code(char ascii_ch, char buffer[], int i)
{
	char map_to[] = "0123456789ABCDEF";
	/* The hexa format code is always 2 digits long */
	if (ascii_ch < 0)
		ascii_ch *= -1;

	buffer[i++] = '\\';
	buffer[i++] = 'x';

	buffer[i++] = map_to[ascii_ch / 16];
	buffer[i] = map_to[ascii_ch % 16];

	return (3);
}

int print_unsigned(unsigned int num)
{
	if (num > 9)
		print_unsigned(num / 10);
	return (_putchar('0' + num % 10));
}
