#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: the string
 * Return: the capitalized character
 */

char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
	{
		if (str[i] == ',' || str[i] == ';' || str[i] == '.' || str[i] == '!' || str[i] == '?' || str[i] == '\"' || str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}' || str[i] == ' ')
		{
			i++;
			if (str[i] == ' ')
			{
				i++;
				if (str[i] >= 'a' && str[i] <= 'z')
				{
					str[i] = str[i] - 32;
				}
			}
			else
			{
				if (str[i] >= 'a' && str[i] <= 'z')
				{
					str[i] = str[i] - 32;
				}
			}
		}
	}
	return (str);
}
