#include <stdlib.h>
#include "main.h"

/**
 * *str_concat - concatenates two strings
 * @s1: string to concatenate
 * @s2: other string to concatenate
 *
 * Return: pointer to the new string created (Success), or NULL (Error)
 */

char *str_concat(char *size1, char *size2)
{
	char *s3;
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

	while (size1 && size1[len1])
		len1++;
	while (size2 && size2[len2])
		len2++;

	s3 = malloc(sizeof(char) * (len1 + len2 + 1));
	if (s3 == NULL)
		return (NULL);

	i = 0;
	j = 0;

	if (size1)
	{
		while (i < len1)
		{
			s3[i] = size1[i];
			i++;
		}
	}

	if (size2)
	{
		while (i < (len1 + len2))
		{
			s3[i] = size2[j];
			i++;
			j++;
		}
	}
	s3[i] = '\0';

	return (s3);
}
