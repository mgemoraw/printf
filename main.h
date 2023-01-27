#ifndef TMAIN_H
#define TMAIN_H

#include <stdlib.h>
#include <limits.h>
#include <unistd.h>
#include <stdarg.h>

#define UNUSED(x) (void)(x)
#define BUFFER_SIZE 1024
#define _ABS(x) ((x) > 0 ? (x) : (-x))


/*** size macros ***/
#define SIZE_LONG 2
#define SIZE_SHORT 1


/*** flag macros ***/
#define MINUS 1
#define PLUS 2
#define ZERO 4
#define HASH 8
#define SPACE 16


/**
* struct flags - struct to flags
* @plus: '+' falg
* @space: ' ' flag
* @hash: '#' flag
*/
typedef struct flags
{
	int plus;
	int space;
	int hash;
} flags_t;

/**
* struct format - struct operator
*@ch: format character
*@func: pointer function
*/
typedef struct format
{
	char ch;
	int (*func)(va_list args, char[], int, int, int, int);
} fmt_t;

/*util functions */
int _putchar(char c);
int _puts(char const *str);
int _wputs(char const *buff);
int _putint(int arg);

/***** _funcs0.c functions ******/
int print_hex_lower(unsigned int x);
int print_hex_upper(unsigned int x);
int _putbin(unsigned int n);
int _putnum(int n);
int print_negative(int arg);


/***** _funcs1.c functions ******/
int print_long(unsigned long int num);
int print_octal(unsigned int num);
int hex_lower(int n);
int hex_upper(int n);
int get_size(const char *format, int *index);


/*** _funcs2.c functions ***/
int append_hexa_code(char ascii_ch, char buffer[], int i);
int is_digit(char c);
int is_printable(char ch);
int _strlen(const char *fmt);
int print_unsigned(unsigned int num);



/** handle_flags.c **/
int get_width(const char *format, int *index, va_list args);
int get_precision(char const *format, int *index, va_list args);
int get_flag(char const *format, int *index);


/***** func_args1.c functions ******/
int put_char(va_list args, char buffer[], int flag, int width, int precision, int size);
int put_int(va_list args, char buffer[], int flag, int width, int precision, int size);
int put_percent(va_list args, char buffer[], int flag, int width, int precision, int size);
int put_str(va_list args, char buffer[], int flag, int width, int precision, int size);
int put_uint(va_list args, char buffer[], int flag, int width, int precision, int size);


/***** func_args2.c functions ******/
int put_bin(va_list args, char buffer[], int flag, int width, int precision, int size);
int put_octal(va_list args, char buffer[], int flag, int width, int precision, int size);
int put_hexa(va_list args, char buffer[], int flag, int width, int precision, int size);
int put_hex_upper(va_list args, char buffer[], int flag, int width, int precision, int size);
int put_non(va_list args, char buffer[], int flag, int width, int precision, int size);

/***** func_args3.c functions ******/
int put_pointer(va_list args, char buffer[], int flag, int width, int precision, int size);
int put_reverse(va_list args, char buffer[], int flag, int width, int precision, int size);
int put_rot13_string(va_list args, char buffer[], int flag, int width, int precision, int size);

/**** _printf.c ****/
void print_buffer(char buffer[], int *buff_i);
int _printf(char const *format, ...);
int handle_formats(const char *format, int *ind, va_list args, char *buffer, int flags, int width, int precision, int size);

#endif
