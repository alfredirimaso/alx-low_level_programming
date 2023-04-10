#include "main.h"
#include <stdio.h>
/**
 * main - prints all the arguments it receives
 * @argv: array of pointers to strings
 * @argc: argument count
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
