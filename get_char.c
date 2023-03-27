#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
* _printf - prints formatted output to stdout
* @format: a string containing zero or more directives
*
* Return: the number of characters printed
*/
int _printf(const char *format, ...)
{
va_list args;
int count = 0;

va_start(args, format);

while (*format)
{
if (*format == '%')
{
format++;
if (*format == 'd' || *format == 'i')
{
int num = va_arg(args, int);
printf("%d", num);
count++;
}
}
else
{
putchar(*format);
count++;
}
format++;
}

va_end(args);

return (count);
}

/**
* main - tests the _printf function
*
* Return: always 0
*/
int main(void)
{
int num = 42;
_printf("The answer is %d\n", num);
return (0);
}
