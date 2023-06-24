#include "main.h"
/**
 *
 *
 */

int specifier_func(char ch, va_list args, const char *format, ...)
{
	int print_count = 0;
	int len;

	va_start(args, format);

	switch(ch)
	{
		case 'c':
			put_char(va_arg(args, int));
			print_count++;
			break;
		case 's':
			len = put_str(va_arg(args, char *));

			print_count += len;
			break;
		case '%':
			put_char('%');
			print_count++;
			break;
		default:
			put_char(ch);
			print_count++;
			break;
	}
	va_end(args);
	return (print_count);
}
