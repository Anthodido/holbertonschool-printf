#include "main.h"

/**
 * x_func - imprime un entier en hexadécimal minuscule
 * @liste: liste d'arguments
 * Return: nombre de caractères imprimés
 */

int x_func(va_list liste)
{
unsigned int n = va_arg(liste, unsigned int);
char hex_digits[] = "0123456789abcdef";
int count = 0;
char buffer[20];
int i = 0;

if (n == 0)
return (_putchar('0'));

while (n > 0)
{
buffer[i++] = hex_digits[n % 16];
n /= 16;
}

i--;
while (i >= 0)
count += _putchar(buffer[i--]);

return (count);
}
