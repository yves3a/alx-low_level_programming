#include <stdlib.h>
#include "main.h"
/**
 * _strdup - a function that returns a pointer to a newly
 *          allocated memory with the string
 * @str: string to be taken into the memory
 * Return: - NULL if the string is null and when insuffiecient memory.
 *         - a pointer to the string
 */

char *_strdup(char *str)
{
	char *ptr;
	int index = 0;
	int len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	ptr = malloc((len * sizeof(char)) + 1);

	if (ptr == NULL)
		return (NULL);

	for (index = 0; str[index] != '\0'; index++)
	{
		ptr[index] = str[index];
	}
	ptr[index] = '\0';


	return (ptr);
}
