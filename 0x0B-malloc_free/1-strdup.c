#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - copies the string given as parameter
 * @str: string to duplicate
 *
 * Return: pointer to the copied string (Success), NULL (Error)
 */
char *_strdup(char *str)
{
	char *m;
	unsigned int i, len;

	i = 0;
	len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	m = malloc(sizeof(char) * (len + 1));

	if (m == NULL)
		return (NULL);

	while ((m[i] = str[i]) != '\0')
		i++;

	return (m);
}