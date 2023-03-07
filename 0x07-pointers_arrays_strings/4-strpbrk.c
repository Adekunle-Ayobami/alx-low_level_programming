#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */

char *_strpbrk(char *s, char *accept)
{
	int d, n;

	for (d = 0; s[d] != '\0'; d++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[d] == accept[n])
				return (s + 1);
		}
	}

	return (NULL);
}
