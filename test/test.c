#include <stdio.h>
#include "main.h"




// int handle_print(const char *foramt, int *i, va_list list, char *buffer, int flags, int width, int precision, int size);

// int get_flag(char c, int *index);


/***Main Function***/
int main()
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    // _wputs("\nhello world"); /* prints in the reverse order*/
    _puts("hello world\n");  /* prints in the given order */

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");


    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;

    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);

    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);

    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);

    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);

    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);

    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');

    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");

    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);

    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");

    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");

    unsigned long x= 0x7ffe637541f0;
    printf("%lu\n", x);
    printf("%x\n", x);
    return (len);
    
}


/***_printf***/
int _printf(char const *format, ...)
{
    int len = 0, i = 0, printed_chars = 0, printed = 0;
    int flags, width, precision, size, buff_i = 0;
    char *buffer;
    va_list args;

    va_start(args, format);

    while (format[len] != '\0')
    {
        if (format[len] != '%')
        {
            // buffer[buff_i] = format[len];
            // if (buff_i == BUFFER_SIZE)
            //     print_buffer(buffer, &len);
            _putchar(format[len]);
            len++;
            buff_i++; 
        }
        
        // if (*format == '%')
        else
        {
            
            // flag = get_flag(format, format);
            // width = get_width(format, &i, list);
            // precision = get_precision(format, &i, list);
            // size = get_size(format, &i);

            ++len;
            // printed = handle_print(format, &(len), args, buffer, flags, width, precision, size);
            
            printed = handle_formats(format, &(len), args, buffer);

            len += 1;
        }
        // len++;
    } 
    va_end(args); 
    return (len);
}
/**
* handle_formats - 
* @format: 
* @index:
* @args:
* @buffer:
* Return: returns length 
*/
int handle_formats(char const *format, int *index, va_list args, char *buffer)
{
    int i, temp = 0, printed_chars = -1, width = 1;
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
 * @buff_ind: Index at which to add next char, represents the length.
 */
void print_buffer(char buffer[], int *buff_ind)
{
	if (*buff_ind > 0)
		write(1, &buffer[0], *buff_ind);

	*buff_ind = 0;
}
