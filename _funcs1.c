#include "main.h"

/**
*print_long - prints long int
* @num: input integer number
* Return: returns printed number
*/
int print_long(unsigned long int num)
{
if (num >= 9)
print_long(num / 10);

return (_putchar('0' + num % 10));
}

/**
*print_octal - prints octal form
* @num: input integer number
* Return: returns printed number
*/
int print_octal(unsigned int num)
{
if (num >= 7)
print_octal(num / 8);

return (_putchar(num % 8 + '0'));
}

/** converting to hexadecimal **/
/**
*hex_lower - converts number into hexchar for n > 10
* @n: input integer number
* Return: returns printed number
*/
int hex_lower(int n)
{
if (n < 10)
_putchar(n + '0');

if (n == 10)
_putchar('a');

else if (n == 11)
_putchar('b');

if (n == 12)
_putchar('c');

if (n == 13)
_putchar('d');

if (n == 14)
_putchar('e');

if (n == 15)
_putchar('f');
return (0);
}
/**
*hex_upper - converts number into hexchar for n > 10
* @n: input integer number
* Return: returns printed number
*/
int hex_upper(int n)
{
if (n < 10)
_putchar('0' + n);

if (n == 10)
_putchar('A');

else if (n == 11)
_putchar('B');

else if (n == 12)
_putchar('C');

else if (n == 13)
_putchar('D');

else if (n == 14)
_putchar('E');

else if (n == 15)
_putchar('F');

return (0);

}
