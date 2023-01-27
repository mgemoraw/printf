#include "main.h"
/**
* put_pointer - handles pointers
* @args: passed argument
* Return: returns number of decimals printed
*/
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
    /* return (write(1, (char *)ptr, 12)); */
}
/**
* put_reverse - handles non revarsed characters
* @args: passed argument
* Return: returns number of decimals printed
*/
int put_reverse(va_list args)
{
return (va_arg(args, int));

}
/**
* put_rot13_string - handles rot13_string format
* @args: passed argument
* Return: returns number of decimals printed
*/
int put_rot13_string(va_list args)
{
return (va_arg(args, int));
}

