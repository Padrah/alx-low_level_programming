#include "main.h"


unsigned int _strspn(char *s, char *accept)
{
	int i;
	int length = 0;

	while (*s != ' ')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s != ' ')
			{
				if (accept[i] == *s)
				{
					length++;
				}
			}

		}
		s++;
	}
	return (length);
}
