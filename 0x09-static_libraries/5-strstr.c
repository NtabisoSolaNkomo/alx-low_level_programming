#include "main.h"

/**
 * _strstr
 * @haystack
 * @needle
 *
 * Return:
 */char *_strstr(char *haystack, char *needle)
{
	for (; haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			i++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
	}

	return (0);
}
