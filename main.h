#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

int _putchar(char c);
int _puts(char *str);
int _putint(int arg);
void _putbin(unsigned int n);
void _putnum(int n);
int _strlen(const char *fmt);
int _fmtlen(const char *fmt);
int _printf(const char * format, ...);


#endif