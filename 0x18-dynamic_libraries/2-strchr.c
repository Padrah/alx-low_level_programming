#include "main.h"

char *_strchr(char *s, char c)
{
	while (*s != '\n')
	{
		if (*s != c)
		{
			s++;
		}
		else
		{
			return (s);
		}
	}
	return ('\0');
}
