#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_char - print char
 * @sep: separator
 * @args: list of arguments
 */

void print_char(char *sep, va_list args)
{
	printf("%s", sep);
	printf("%c", va_arg(args, int));
}

/**
 * print_int - print int
 * @sep: separator
 * @args: list of arguments
 */

void print_int(char *sep, va_list args)
{
	printf("%s", sep);
	printf("%d", va_arg(args, int));
}

/**
 * print_float - print float
 * @sep: separator
 * @args: list of arguments
 */

void print_float(char *sep, va_list args)
{
	printf("%s", sep);
	printf("%f", va_arg(args, double));
}

/**
 * print_string - print string
 * @sep: separator
 * @args: list of arguments
 */

void print_string(char *sep, va_list args)
{
	printf("%s", sep);
	printf("%s", va_arg(args, char *));
}

/**
 * print_all - prints anything*
 * @format: list of types of arguments
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i, j;
	char *sep;

	op_t ops[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};

	va_start(args, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (ops[j].c != '\0') 
		{
			if (ops[j].c == format[i])
			{
				if (i == 0)
					sep = "";
				else
					sep = ", ";
				ops[j].f(sep, args);
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
