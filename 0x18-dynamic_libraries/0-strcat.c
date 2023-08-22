#include "main.h"

char *_strcat(char *dest, char *src)
{
	int n;
	int len = _strlen(dest);

	for (n = 0; src[n] != '\0'; n++, len++)
	{
		dest[len] = src[n];
	}

	return (dest);
}

