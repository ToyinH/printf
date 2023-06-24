#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
int put_char(char a);
int put_str(char *str);
int put_d(int num);
int specifier_func(char ch, va_list args);

#endif
