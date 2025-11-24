#include "main.h"

int s_func(va_list liste)
{
char *str;
int i = 0;

str = va_arg(liste, char *);
if (str == NULL)
{
str = "(NULL)";
}
while (str[i] != '\0')
{
_putchar (str[i]);
i++;
}
return (i);
}