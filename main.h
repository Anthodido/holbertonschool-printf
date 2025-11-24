#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

int _putchar(char c);
int _printf(const char *format, ...);
int c_func(va_list liste);
int s_func(va_list liste);
int mod_func(va_list liste);

#endif