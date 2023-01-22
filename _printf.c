#include "main.h"

/**
* _printf- prints formated text
* @format: formated string
* Return: returns integer
*/
int _printf(const char *format, ...)
{
	va_list list;

	int i = 0;

	if (format == NULL)
	return (0);

	/* len = _fmtlen(format);*/
	va_start(list, format);

	while (*(format + i) != '\0')
	{
		if (*(format + i) == '%')
		{
			i++;
			switch (*(format + i))
			{
				case 's':
					_puts(va_arg(list, char *));
					break;
				case 'c':
					_putchar(va_arg(list, int));
					break;
				default:
					_putchar(format[i]);
					break;
			}
		}
		else
		{
			_putchar(format[i]);
		}
		i++;
	}
	va_end(list);
	return (i);
}
