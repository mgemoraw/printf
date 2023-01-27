#include "main.h"

/***_printf***/
/**
* _printf - prints formatted text
* @format: format text
* Return: returns the length of formatted text printed
*/
int _printf(char const *format, ...)
{
	int index = 0, printed = 0;
	int buff_i = 0;
	int flag = 0, width  = 0, precision = 0, size = 0;
	char buffer[BUFFER_SIZE];
	va_list args;

	va_start(args, format);

	while (format[index] != '\0')
	{
		if (format[index] != '%')
		{
			/*
			 * buffer[buff_i++] = format[index];
			 * if (buff_i == BUFFER_SIZE);
			 * print_buffer(buffer, &index);
			 */
			_putchar(format[index]);
			index++;
		}
		/* if (*format == '%') */
		else
		{
			/**
			* flag = get_flag(format, &index);
			* width = get_width(format, &index, args);
			* precision = get_precision(format, &index, args);
			* size = get_size(format, &index);
			*/
			++index;
			printed = handle_formats(format, &(index), args, buffer, flag, width, precision, size);

			if (printed == -1)
				return (-1);

			index += 1;
			}
	}
	print_buffer(buffer, &buff_i);
	va_end(args);
	return (index);
}
/**
* handle_formats - handles different formatting characters
* @format: formated text input
* @index: current index of formated text
* @args: passed argument
* @buffer: character array as buffer text
* @flag: flag handler
* @width: width specifier
* @precision: precision specifier
* @size: size specifier
* Return: returns integer
*/
int handle_formats(char const *format, int *index, va_list args, char buffer[], int flag, int width, int precision, int size)
{
	int i, temp = 0, printed_chars = -1;
	/*int width = 1;*/

	fmt_t format_types[] = {
		{'c', put_char}, {'s', put_str}, {'%', put_percent}, {'d', put_int}, {'i', put_int}, {'b', put_bin}, {'p', put_pointer}, {'u', put_uint}, {'o', put_octal}, {'x', put_hexa}, {'X', put_hex_upper}, {'S', put_non}, {'r', put_reverse}, {'R', put_rot13_string}, {'\0', NULL}
};

	for (i = 0; format_types[i].ch != '\0'; i++)
	{
		if (format[*index] == format_types[i].ch)
			return (format_types[i].func(args, buffer, flag, width, precision, size));
	}

	if (format_types[i].ch == '\0')
	{
		if (format[*index] == '\0')
			return (-1);
		temp += write(1, "%%", 1);
		if (format[*index - 1] == ' ')
			temp += write(1, " ", 1);

	else if (width)
	{
		--(*index);
		while (format[*index] != ' ' && format[*index] != '%')
			--(*index);
		if (format[*index] == ' ')
			--(*index);
		return (1);
	}

	temp += write(1, &format[*index], 1);
	return (temp);
	}

	return (printed_chars);
}


/**
 * print_buffer - Prints the contents of the buffer if it exist
 * @buffer: Array of chars
 * @buff_i: Index at which to add next char, represents the length.
 */
void print_buffer(char buffer[], int *buff_i)
{
	if (*buff_i > 0)
		write(1, &buffer[0], *buff_i);

	*buff_i = 0;
}
