#include "main.h"
/**
 * *_strncpy - a function that copies a strings
 * @dest: this is where copied source code will be pasted
 * @src: strings to be copied
 * @n: at most number of characters of src to be copied.
 * Return: dest wehen successfully executed
 */
char *_strncpy(char *dest, char *src, int n)
{
        int i;

        for (i = 0; i < n && src[i] != n; i++)
        {
                dest[i] = src[i];
        }

        for (; i < n; i++)
        {
                dest[i] = '\0';
        }

        return (dest);
}
