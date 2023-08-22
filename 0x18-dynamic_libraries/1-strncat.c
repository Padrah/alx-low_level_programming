#include "main.h"


char *_strncat(char *dest, char *src, int n)
{
	int i;
	int len = _strlen(dest);

	for (i = 0; src[i] != src[n]; i++, len++)
	{
		dest[len] = src[i];
	}

	return (dest);
}

