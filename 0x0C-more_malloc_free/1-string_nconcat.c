#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - it concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: bytes of s2 to be concatenated
 * Return: - NULL when function fails, pointer otherwise.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned len, index;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index]; index++)
		len++;

	ptr = malloc((len + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	len = 0;

	for (index = 0; s1[index]; index++)
		ptr[len++] = s1[index];

	for (index = 0; s2[index] && index < n; index++)
		ptr[len++] = s1[index];

	ptr[len] = '\0';

	return (ptr);
}
