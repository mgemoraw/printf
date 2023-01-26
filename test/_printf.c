#include "main.h"

/**
* buff_print - prints buffer
* @format: hold  formated text
* Return: returns int
*/
void buff_print(const char *format, ...)
{
	va_list args;

	if (format == NULL)
	return;

	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 's')
			{
				_puts(va_arg(args, char *));
				format++;
				continue;
			}
		}
		else
		{
			_putchar(*format);
			format++;
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
	va_list list;
	int i = 0, len = 0;

	if (format == NULL)
	return (0);

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
				case 'd':
				case 'i':
					print_negative(va_arg(list, int));
					break;
				case 'u':
					put_uint(va_arg(list, unsigned int));
					break;
				case '%':
					_putchar(format[i]);
					break;
				default:
					_putchar('%');
					_putchar(format[i]);
					break;
			}
		}
		else
		{
			_putchar(format[i]);
		}
		i++, len++;
	}
	va_end(list);
	return (len);
}