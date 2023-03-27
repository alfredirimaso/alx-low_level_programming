#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: Pointer to string to measure
 * Return: Lenght of the string
 */

int _strlen(char *s)
{
	int i;
	int len;

	i = 0;
	len = 0;
	while (*(s + i) != '\0')
	{
		len = len + 1;
		i++;
	}
	return (len);
}

/**
 * _atoi - convert a string to an integer.
 * @s: Pointer to string to translate
 * Return: Int from string
 */

int _atoi(char *s)
{
	unsigned int i;
	unsigned int len;
	int ret;
	int sign;

	sign = 0;
	ret = 0;
	len = _strlen(s);
	for (i = 0; i < len; i++)
	{
		if (*(s + i) == 45)
			sign = sign + 1;
		else if (*(s + i) >= 48 && *(s + i) <= 57)
			ret = (ret * 10) + (*(s + i) - '0');
		else if (ret > 0)
			break;
	}
	if (sign % 2 != 0)
		ret = ret * -1;
	return (ret);
}
