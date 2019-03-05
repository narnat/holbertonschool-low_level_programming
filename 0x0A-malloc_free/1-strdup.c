#include "holberton.h"

/**
 * _strdup - duplicates a string
 * @str: string
 *
 * Return: a pointer to the string
 */
char *_strdup(char *str)
{
	char *s;
	int i = 0;

	if (!*str)
		return (NULL);
	while (str[i])
	{
		i++;
	}
	s = malloc(sizeof(char) * i);
	if (s == NULL)
		return (NULL);
	i = 0;
	while (str[i])
	{
		s[i] = str[i];
		i++;
	}
	s[i++] = '\0';
	return (s);
}