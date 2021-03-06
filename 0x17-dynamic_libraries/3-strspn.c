#include "holberton.h"
/**
 * _strspn - Count characters in string 's' that match accept.
 * @s: Number of bytes in string to be printed
 * @accept: Bytes to be counted in string s
 * Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int x = 0;
	int n = 0;

	while (s[n] != '\0')
	{
		while (accept[x] != '\0')
		{
			if (s[n] == accept[x])
			{
				i++;
				break;
			}
			x++;
		}
		if (s[n] != accept[x])
			break;
		x = 0;
		n++;
	}
	return (i);
}
