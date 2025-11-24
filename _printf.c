#include "main.h"

int _printf(const char *format, ...)
{
	int i, count = 0;

	va_list liste;

	if (format == NULL)
		return (0);

	va_start(liste, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			count++;
		}
		else
		{
			if (format[i + 1] == '%')
			{
				_putchar('%');
				count++;
				i++;
			}
			else if (format[i + 1] == 'c')
			{
				count += c_func(liste);
				i++;
			}
			else if (format[i + 1] == 's')
			{
				count += s_func(liste);
				i++;
			}
		}
	}

	va_end(liste);

	return (count);
}