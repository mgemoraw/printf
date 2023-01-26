#include "main.h"

/***_printf***/
/**
* _printf - prints formatted text
* @format: format text
* Return: returns the length of formatted text printed
*/
int _printf(char const *format, ...)
{
	int len = 0, printed = 0;
    /*int buff_i = 0;*/
	/*int flags, width, precision, size;*/
	/*char buffer[BUFFER_SIZE]; */
	va_list args;

	va_start(args, format);

	while (format[len] != '\0')
	{
		if (format[len] != '%')
		{
			/**
			buffer[buff_i++] = format[len];
			* if (buff_i == BUFFER_SIZE)
			* print_buffer(buffer, &len);
			*/
			_putchar(format[len]);
			len++;
		}

		/* if (*format == '%') */
        else
        {

            /**
            * flag = get_flag(format, format);
            * width = get_width(format, &i, list);
            * precision = get_precision(format, &i, list);
            * size = get_size(format, &i);
            */

            ++len;
            /* printed = handle_print(format, &(len), args, buffer, flags, width, precision, size); */
            
            printed += handle_formats(format, &(len), args);

            len += 1;
        }
        /* len++; */
    }
    va_end(args);
    return (len);
}
/**
* handle_formats - handles different formatting characters
* @format: formated text input
* @index: current index of formated text
* @args: passed argument
* @buffer: character array as buffer text
* Return: returns integer
*/
int handle_formats(char const *format, int *index, va_list args)
{
    int i, temp = 0, printed_chars = -1;
    /*int width = 1;*/

    fmt_t format_types[] = {
        {'c', put_char}, {'s', put_str}, {'%', put_percent}, {'d', put_int}, {'i', put_int}, {'b', put_bin}, {'p', put_pointer}, {'u', put_uint}, {'o', put_octal}, {'x', put_hexa}, {'X', put_hex_upper}, {'S', put_non}, {'r', put_reverse}, {'R', put_rot13_string}, {'\0', NULL} 
    };

    for (i = 0; format_types[i].ch != '\0'; i++)
    {
        if (format[*index] == format_types[i].ch)
            return (format_types[i].func(args));
    }

    if (format_types[i].ch == '\0')
    {
        if (format[*index] == '\0')
            return (-1);
        temp += write(1, "%%", 1);
        if (format[*index - 1] == ' ')
            temp += write(1, " ", 1);
        /*
        else if (width)
        {
            --(*index);
            while (format[*index] != ' ' && format[*index] != '%')
                --(*index);
            if (format[*index] == ' ')
                --(*index);
            return (1);
        }
        */
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
