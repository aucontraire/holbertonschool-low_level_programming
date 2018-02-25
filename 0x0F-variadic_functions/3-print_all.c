#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_char - print char
 * @args: list of arguments
 */

void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_int - print int
 * @args: list of arguments
 */

void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - print float
 * @args: list of arguments
 */

void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_string - print string
 * @args: list of arguments
 */

void print_string(va_list args)
{
	char *s = va_arg(args, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}

/**
 * print_all - prints anything*
 * @format: list of types of arguments
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i, j;
	char *s1 = "";
	char *s2 = ", ";

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
				printf("%s", s1);
				ops[j].f(args);
				s1 = s2;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
