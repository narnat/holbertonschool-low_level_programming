#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: separator to be printed
 * @n: number of arguments
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list vp;
	unsigned int i;

	va_start(vp, n);
	for (i = 0; i < n; i++)
	{
		printf("%d%s", va_arg(vp, int),
		       separator ? separator : "");
	}
	printf("\n");
	va_end(vp);
}
