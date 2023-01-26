#include "main.h"

/**
* _putchar - puts the character string to i/o(input output)
* @c: input character
* Return: returns charactor to i/o
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
