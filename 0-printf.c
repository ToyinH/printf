#include "main.h"
/**
 *
 */

int _printf(const char *format, ...)
{
	int i;
	int print_counts = 0;
	va_list list;

	if (format)
	{
		while (format[i] != '\0')
		{
			if (format[i] == '%')
			{
				i++;
				print_counts = specifier_func(format[i], list, format);
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
	return (print_counts);
}
