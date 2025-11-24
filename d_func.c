#include "main.h"

int d_func(va_list liste)
{
int n, count = 0;
unsigned int num;
char buffer[10];
int ind = 0;
unsigned int digit;


n = va_arg(liste, int);
if (n == 0)
{
_putchar ('0');
return (1);
}
if (n < 0)
{
_putchar ('-');
count++;
num = -n;
}
else
{
num = n;
}
while (num > 0)
{
digit = num % 10;
buffer[ind] = '0' + digit;
ind++;
num = num / 10;
}
while (ind > 0)
{
ind--;
_putchar (buffer[ind]);
count++;
}
return (count);
}