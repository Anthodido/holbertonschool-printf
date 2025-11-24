#include "main.h"

int _printf(const char *format, ...)
{
	int i, count = 0;

	va_list liste;

	if (format == NULL)
		return (0);

	for (i = 0; format[i] != '\0'; i++)
	{
		_putchar(format[i]);
		count++;
	}

	return (count);
}