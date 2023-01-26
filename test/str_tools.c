#include "main.h"
/**
*_strlen - return length of string
* @fmt: input character array
* Return: return length of string
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
 * _fmtlen - description about fmtlen
 * @fmt: format text
 * Return: returns int
 */
int _fmtlen(const char *fmt)
{
	int len = 0, i;
	/*
	*char fs[] = {"c", "i","u", "lu", "d", "ld", "f", "lf", "llf", "a", "p", "s"};
	 */

	if (fmt == NULL)
	return (0);

	while (*(fmt + len) != '\0' && fmt[len] == '%')
	{
		for (i = 0; i < len; i++)
		{
			if (fmt[i + 1] != '%')
				len++;
		}
	}
	return (len);
}
