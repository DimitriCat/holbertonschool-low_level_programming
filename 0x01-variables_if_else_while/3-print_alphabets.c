#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
	int main(void)
	{
		    int ch;

		    for (ch = 'a'; ch <= 'z'; ch = ch + 1)
		    {
			    putchar(ch);
		    }
		    for (ch = 'A'; ch <= 'Z'; ch = ch + 1)
		    {
			    putchar(ch);
		    }
		    putchar('\n');
		    return (0);
	}

