#ifndef TMAIN_H
#define TMAIN_H

#include <stdlib.h>
#include <limits.h>
#include <unistd.h>
#include <stdarg.h>

#define BUFFER_SIZE 1024
#define _ABS(x) ((x) > 0 ? (x) : (-x))

/**
* format - struct operator
*@ch: format character
*@f: pointer function
*/
typedef struct format
{
	char ch;
	int (*func)(va_list args);
} fmt_t;

int _putchar(char c);
int _puts(char const *str);
int _wputs(char const *buff);
int _putint(int arg);
int _putbin(unsigned int n);
int _putnum(int n);

/***** custom functions ******/
int put_char(va_list args);
int put_int(va_list args);
int put_bin(va_list args);
int put_percent(va_list args);
int put_str(va_list args);
int put_uint(va_list args);
int print_hex_lower(unsigned int x);
int print_hex_upper(unsigned int x);
int print_long(unsigned long int num);
int print_octal(unsigned int num);
int hex_lower(int n);
int hex_upper(int n);



int put_octal(va_list args);
int put_hexa(va_list args);
int put_non(va_list args);
int put_reverse(va_list args);
int put_rot13_string(va_list args);
int put_hex_upper(va_list args);
int put_pointer(va_list args);
void print_buffer(char buffer[], int *buff_i);


int _printf(char const *format, ...);
int handle_formats(char const *format, int *index, va_list args);
/**
*int handle_print(const char *format, int *ind, va_list list, char *buffer, int flags, int width, int precision, int size)
*/

#endif
