#include "main.h"
/**
 * _printf - my printf function
 * @format: string and specifier
 *
 * Return: return the number of character printed
 */

int _printf(const char *format, ...)
{
	int i = 0;
	int print_counts = 0;
	int print_counts1 = 0;
	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[i] != '\0')
		{
			if (format[i] == '%')
			{
				i++;
				print_counts1 = specifier_func(format[i], list);
			}
			else
			{
				put_char(format[i]);
				print_counts++;
			}
			i++;
		}
		va_end(list);
	}
	return (print_counts + print_counts1);
}
