#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "main.h"

/**
 * _printf - A function that produces output according to a format
 * @format: arguement passed
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	int l;

	va_list str;

	va_start(str, format);

	l = strlen(format);

	printf("%s", va_arg(str, char *));
	printf("%c", va_arg(str, char *));
	

	return (l);
	va_end(str);
}
