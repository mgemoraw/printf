#include "main.h"
/**
*_strlen - returns length of string
* @fmt: input character array
* Return: returns length of string
*/
unsigned int _strlen(char *fmt)
{
	unsigned int len;

	if (fmt == NULL)
	return (0);

	while (*(fmt + len))
	len++;

	return (len);
}
/**
 * _fmtlen - description about fmtlen
 */
int _fmtlen(const char *fmt)
{
	int len = 0;
	char fs[] = {"%c", "%i","%u", "%lu", "%d", "%ld", "%f", "%lf", "%llf", "%a", "%p", "%s"};

	
	if (fmt == NULL)
	return (0)

	while (*(fmt + len) != '\0')
	{
		for (i = 0; i < lenfs; i++)
		{
			if ()
		}
	}
}
/**
* _printf- prints formated text
* @format: formated string
* Return: returns integer
*/
int _printf(const char *format, ...)
{
	unsigned int len, argc = 0;
	va_list list;

	len = _strlen(format);
	va_start(list, format);
	
	for (; argc < )
	return;
}

