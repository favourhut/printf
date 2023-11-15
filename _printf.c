#include "main.h"

/**
 * _printf - This handle format specifier
 * @format: format spsecifier
 * Return: 0 on succes
 */

int _printf(const char *format, ...)
{
	unsigned int a;
	unsigned int set = 0;
	unsigned int str_set;

	va_list fav;

	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	va_start(fav, format);

	for (a = 0; format[a] != '\0'; a++)
	{
		if (format[a] != '%')
		{
			_addchar(format[a]);
		}

		else if (format[a] == '%' && format[a + 1] == 'c')
		{
			_addchar(va_arg(fav, int));
			a++;
		}
		else if (format[a] == '%' && format[a + 1] == 's')
		{
			str_set = puts_s(va_arg(fav, char *));
			a++;
			set = +(str_set - 1);
		}
		else if (format[a + 1] == '%')
		{
			_addchar('%');
		}

		set += 1;
	}
	va_end(fav);
	return (set);
}
