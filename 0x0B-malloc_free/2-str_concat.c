#include <stdlib.h>
#include "main.h"

/**
 * str_concat - a functin that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: - pointer to memory with s1 followed by s2 aand null terminator
 *         - NULL on failure.
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int index, concat_index = 0, len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index] || s2[index]; index++)
		len++;

	ptr = malloc((len + 1) * sizeof(char));


	if (ptr == NULL)
		return (NULL);

	for (index = 0; s1[index]; index++)
		ptr[concat_index++] = s1[index];

	for (index = 0; s2[index]; index++)
		ptr[concat_index++] = s2[index];
	ptr[concat_index] = '\0';

	return (ptr);

}
