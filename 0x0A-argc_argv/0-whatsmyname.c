#include"main.h"
#include<stdio.h>

/**
 * main - print the name of the program
 * @argc: the number of command-line arguments passed
 * @argv: an array of string containnig the command-line argiments
 *
 * Return: it return 0 on success
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);

	(void)argc;
	return (0);
}
