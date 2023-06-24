#include "main.h"
/**
 *
 */

int _printf(const char *format, ...)
{
	int i;
	int len;
	int print_counts = 0;
	va_list list;

	if (format)
	{
		while (format[i] != '\0')
		{
			if (format[i] == '%')
			{
				i++;
				switch(format[i])
				{
					case 'c':
						put_char(va_arg(list, int));
						print_counts++;
						break;
					case 's':
						len = put_str(va_arg(list, char *));
						print_counts += len;
						break;
					case '%':
						put_char('%');
						print_counts++;
						break;
					default:
						put_char(format[i]);
						print_counts++;
						break;
				}
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
