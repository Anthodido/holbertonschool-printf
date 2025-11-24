#include "main.h"

typedef struct format_func
{
    char specifier;
    int (*func)(va_list);
} format_func_t;

format_func_t table[] = {
    {'c', c_func},
    {'s', s_func},
    {'%', mod_func},
    {'\0', NULL}
};

int _printf(const char *format, ...)
{
	int i, count = 0;

	va_list liste;

	if (format == NULL)
		return (0);

	va_start(liste, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			int j, found == 0;

			for (j = 0; table[j].specifier != '\0'; j++)
			{
				if (format[i + 1] == table[j].specifier)
				{
					count += table[j].func(liste);
                    i++;
                    found = 1;
                    break;
				}
			}

			if(!found)
			{
				_putchar('%');
				count++;
			}
		}
		else
		{
			_putchar(format[i]);
            count++;
		}
	}

	va_end(liste);

	return (count);
}