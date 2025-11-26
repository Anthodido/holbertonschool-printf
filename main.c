#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	int len2;
	unsigned int ui;
	void *addr;
	char test_ctrl[10];

	test_ctrl[0] = 'A';
	test_ctrl[1] = 'B';
	test_ctrl[2] = 'C';
	test_ctrl[3] = 1;
	test_ctrl[4] = 31;
	test_ctrl[5] = 127;
	test_ctrl[6] = 'D';
	test_ctrl[7] = 'E';
	test_ctrl[8] = 'F';
	test_ctrl[9] = '\0';

	_printf("\n=== Tests de base ===\n");
	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	ui = (unsigned int)INT_MAX + 1024;
	addr = (void *)0x7ffe637541f0;
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
	_printf("Unsigned:[%u]\n", ui);
	printf("Unsigned:[%u]\n", ui);
	_printf("Unsigned octal:[%o]\n", ui);
	printf("Unsigned octal:[%o]\n", ui);
	_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	_printf("Address:[%p]\n", addr);
	printf("Address:[%p]\n", addr);
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	_printf("Unknown:[%r]\n");
	printf("Unknown:[%r]\n");

	_printf("\n=== Tests binaire %%b ===\n");
	_printf("Binary 0:[%b]\n", 0);
	_printf("Binary 1:[%b]\n", 1);
	_printf("Binary 5:[%b]\n", 5);
	_printf("Binary 10:[%b]\n", 10);
	_printf("Binary 98:[%b]\n", 98);
	_printf("Binary 255:[%b]\n", 255);
	_printf("Binary 1024:[%b]\n", 1024);

	_printf("\n=== Tests cas limites ===\n");
	_printf("Zero:[%d]\n", 0);
	printf("Zero:[%d]\n", 0);
	_printf("INT_MAX:[%d]\n", INT_MAX);
	printf("INT_MAX:[%d]\n", INT_MAX);
	_printf("INT_MIN:[%d]\n", INT_MIN);
	printf("INT_MIN:[%d]\n", INT_MIN);
	_printf("UINT_MAX:[%u]\n", UINT_MAX);
	printf("UINT_MAX:[%u]\n", UINT_MAX);

	_printf("\n=== Tests string NULL ===\n");
	_printf("String NULL:[%s]\n", NULL);
	printf("String NULL:[%s]\n", (char *)NULL);
	_printf("String vide:[%s]\n", "");
	printf("String vide:[%s]\n", "");

	_printf("\n=== Tests pointeurs ===\n");
	_printf("Pointer NULL:[%p]\n", NULL);
	_printf("Pointer &main:[%p]\n", &main);
	_printf("Pointer &len:[%p]\n", &len);

	_printf("\n=== Tests octal %%o ===\n");
	_printf("Octal 0:[%o]\n", 0);
	_printf("Octal 8:[%o]\n", 8);
	_printf("Octal 64:[%o]\n", 64);
	_printf("Octal 255:[%o]\n", 255);
	_printf("Octal 1024:[%o]\n", 1024);

	_printf("\n=== Tests hexadecimal %%x et %%X ===\n");
	_printf("Hex minuscule 0:[%x]\n", 0);
	_printf("Hex majuscule 0:[%X]\n", 0);
	_printf("Hex minuscule 15:[%x]\n", 15);
	_printf("Hex majuscule 15:[%X]\n", 15);
	_printf("Hex minuscule 255:[%x]\n", 255);
	_printf("Hex majuscule 255:[%X]\n", 255);
	_printf("Hex minuscule 4096:[%x]\n", 4096);
	_printf("Hex majuscule 4096:[%X]\n", 4096);

	_printf("\n=== Tests %%S (caracteres non imprimables) ===\n");
	_printf("String normale:[%S]\n", "Hello World");
	_printf("Avec newline:[%S]\n", "Hello\nWorld");
	_printf("Avec tab:[%S]\n", "Hello\tWorld");
	_printf("Caracteres controle:[%S]\n", test_ctrl);
	_printf("String vide:[%S]\n", "");
	_printf("String NULL:[%S]\n", NULL);

	_printf("\n=== Tests mixtes ===\n");
	_printf("Mix:[%c-%s-%d-%x]\n", 'A', "test", 42, 255);
	_printf("Multiple %%:[%%%%]\n");
	_printf("Mix binary:[%b et %d]\n", 10, 10);

	_printf("\n=== Tests edge cases ===\n");
	len = _printf("");
	_printf("Empty string len:[%d]\n", len);
	len = _printf("%%");
	_printf("\nDouble percent len:[%d]\n", len);
	len = _printf("%%%%");
	_printf("\nQuadruple percent len:[%d]\n", len);

	return (0);
}
