#include "monty.h"
/**
 *isnumber - check if string is a number
 *@str: string to be checked
 *
 *Return: 1 if number, 0 otherwise
 */
int isnumber(char *str)
{
	int x = 0;

	if (!str)
		return (0);
	while (str[x])
	{
		if (x < '0' || x > '9')
			return (0);
		x++;
	}
	return (1);
}
