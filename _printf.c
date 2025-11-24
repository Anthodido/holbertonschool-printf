#include "main.h"

int _printf(const char *format, ...)
{
va_list liste;
unsigned int i;

type_txt_t type[] = {
	{"c", c_func},
	{"s", s_func},
	{"%", %_func},
	{NULL, NULL},
};

va_start(list, format);

for (i = 0; i < format; i++)
}