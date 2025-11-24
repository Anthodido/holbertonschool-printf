#include "main.h"
#include <stdarg.h>
#include <stdio.h>

int s_func(va_list liste);

/* Fonction variadique qui prépare va_list et appelle s_func */
int test_s(char *dummy, ...)
{
    va_list ap;
    int len;

    va_start(ap, dummy);
    len = s_func(ap);
    va_end(ap);

    return (len);
}

int main(void)
{
    int len;

    /* Test avec une chaîne normale */
    len = test_s(NULL, "Hello Holberton!");
    _putchar('\n');
    printf("s_func a affiche %d caracteres\n", len);

    /* Test avec NULL (si tu as géré le if (!str)) */
    len = test_s(NULL, NULL);
    _putchar('\n');
    printf("s_func (NULL) a affiche %d caracteres\n", len);

    return (0);
}