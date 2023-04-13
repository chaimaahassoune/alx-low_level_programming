#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * string_nconcat - concatenates two strings
 * @s1: first String
 * @s2: second String
 * @n: Nember of Bytes to concatesnate From S2
 *
 * Return: pionter of null if function fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *strcat;
	unsigned int strlen1 = 0, strlen2 = 0, j, i;


	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[strlen1] != '\0')
		strlen1++;
	while (s2[strlen2] != '\0')
		strlen2++;

	strcat = malloc((strlen1 + n + 1) * sizeof(char));

	if (strcat == NULL)
		return (NULL);

	for (i = 0; i < strlen1; i++)
		strcat[i] = s1[i];

	for (j = 0; j < n && s2[j] != '\0'; j++)
		strcat[i + j] = s2[j];
	strcat[i + j] = '\0';

	return (strcat);
}
