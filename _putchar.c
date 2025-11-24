#include "main.h"
/**
* _putchar - Ecrit un caractere variable c
* @c: caractere to print
* On error, -1
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}