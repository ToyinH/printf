#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>
#define BUFFER_SIZE 1024

int _printf(const char *format, ...);
int put_char(char a);
int put_str(char *str);
int put_d(int num);
int put_i(int num);
int specifier_func(char ch, va_list args);
int int_to_binary(unsigned int n);

#endif
