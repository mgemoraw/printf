#include "main.h"

/**
* _putchar - puts the character string to i/o
* @c: input character
* Return: returns charactor to i/o
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}

/**
* put_int - 
*/
int put_int(va_list args)
{
    int num = va_arg(args, int);
    return (_putnum(num));
}
/**
* put_percent- 
*/
int put_percent(va_list args)
{
    char c = va_arg(args, int);
	// return (write(1, "%", 1));
    _putchar('%');
    return (-1);

}


/***_puts****/
int _puts(char const *str)
{
    int len = 0;
    while (*str)
    {
        _putchar(*str);
        str++;
        len++;
    }
    return (len);
}

/***_putbin***/
/**
* _putbin - puts binary form of an integer into stdio
* @n: integer
* Return: returns nothing
*/
int _putbin(unsigned int n)
{
	if (n > 1)
		_putbin(n / 2);
	return _putchar(n % 2 + '0');

}

/**
* _putnum - prints integer into the stdio
* @arg: integer argument
* Return: returns noting
*/
int _putnum(int arg)
{
if (arg > 9)
{
_putnum(arg / 10);
}
return _putchar(arg % 10 + '0');
}

/**
*print_negative - prints negative integer
*@arg: given parameter
*Return: returns nothing
*/
void print_negative(signed int arg)
{
if (arg >= 0)
{
    arg = arg;
    _putnum(arg);
}
if (arg < 0)
{
_putchar('-');
arg = _ABS(arg);
_putnum(arg);
}
}

/**
*put_uint - prints unsigned integer
* @arg: parameter
* Return: returns nothing
*/
int put_uint(va_list args)
{
    int arg = va_arg(args, int);
    return (_putnum(arg));
}

/**
* put_char - 
*/
// int put_char(va_list args, char buffer[], int flags, int width, int precision, int size)
int put_char(va_list args)
{
	char c = va_arg(args, int);

	return (write(1, &c, 1));
}
/**
* put_str - 
*/
int put_str(va_list args)
{
    char *str;
    str = va_arg(args, char *);
    return (_puts(str));
}

int put_bin(va_list args)
{
    int arg = va_arg(args, int);
    return _putbin(arg);
}
int put_pointer(va_list args)
{
    void *ptr = va_arg(args, void *);
    unsigned long int add = (unsigned long int) ptr;

    if (ptr == NULL)
    {
        return (write(1, "(nil)", 5));
    }
    _puts("0x");
    return (print_hex_lower(add));
    // return (write(1, (char *)ptr, 12));
}



int put_octal(va_list args)
{
    unsigned int arg = (unsigned int) va_arg(args, int);
    print_octal(arg);
}
int put_hexa(va_list args)
{
    unsigned int arg = (unsigned int) va_arg(args, int);
    return (print_hex_lower(arg));
}

int put_hex_upper(va_list args)
{
    unsigned int arg = (unsigned int) va_arg(args, int);
        return (print_hex_upper(arg));

}

int print_hex_lower(unsigned int x)
{
    if (x > 16)
    {
        print_hex_lower(x / 16);
    }
    return(hex_lower(x % 16));

}

int print_hex_upper(unsigned int x)
{
    if (x > 16)
    {
        print_hex_upper(x / 16);
    }
    return(hex_upper(x % 16));

}



int put_non(va_list args)
{

}
int put_reverse(va_list args)
{

}
int put_rot13_string(va_list args)
{

}

