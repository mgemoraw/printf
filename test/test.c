#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>


int _puts(const char *str)
{
    int len = 0;
    while (*str)
    {
        putchar(*str);
        str++;
        len++;
    }
    return (len);
}
void _printf(char const *format, ...)
{
    int len = 0, i = 0;
    va_list args;

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
            else if (*(format) == 'p')
            {
                printf("%p", (va_arg(args, void *)));
                format++;
                continue;
            }
            else if (*format == 'c')
            {
                putchar(va_arg(args, int));
                format++;
                continue;
            }
            else
            {
                putchar(*format);
                format++;
            }
        }
        else
        {
            putchar(*format);
            format++;
        }
    }  
}

int main()
{
    int a = 10;
    char b = 'x';

    void *p =  &a;
    _printf("%p\n", *((int *)p));
    _printf("%d\n", a);
    
    p = &b;
    _printf("%p : %c\n", p, *(char *)p);

    _printf("%p what! %%s are you okay? ", p, "hey");
    return (0);
}