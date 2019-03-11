#include "holberton.h"

/**
 * wildcmp - compares two strings
 * @s1: takes string
 * @s2: takes string
 *
 * Return: 0 or 1
 */

int wildcmp(char *s1, char *s2)
{
	if (!*s1)
	{
		if (*s2 == '*')
			return (wildcmp(s1, s2 + 1));
		return (*s2 == '\0');
	}
	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	if (*s1 == *s2)
		return(wildcmp(s1 + 1, s2 + 1));
	return (0);
}
