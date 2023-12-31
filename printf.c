#include "main.h"
/**
 * _printf - my printf function
 * @format: string and specifier
 * Return: return the number of character printed
 */

int _printf(const char *format, ...)
{
	int i = 0, print_counts = 0, print_counts1 = 0;
	va_list list;

	va_start(list, format);
	if (format == NULL)
		return (-1);
	if ((format[i] == '%' && !format[i + 1]) || !format)
		return (-1);
	if (format[i] == '\0')
		return (0);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			if (!format[i])
			{
				return (-1);
			}
			else if (format[i] == ' ' && format[i + 1] == '\0')
			{
				return (-1);
			}
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
	return (print_counts + print_counts1);
}
