#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - It concatenates two strings
 * @s1: the first String
 * @s2: the second String
 *
 * Return: Pointer to String or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int strlen1 = 0;
	int strlen2 = 0;
	char *newstr;
	int i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[strlen1] != '\0')
		strlen1++;
	while (s2[strlen2] != '\0')
		strlen2++;

	newstr = malloc((strlen1 + strlen2 + 1) * sizeof(char));

	if (newstr == NULL)
		return (NULL);

	for (i = 0; i < strlen1; i++)
		newstr[i] = s1[i];
	for (i = 0; i < strlen2; i++)
		newstr[strlen1 + i] = s2[i];
	newstr[strlen1 + strlen2] = '\0';

	return (newstr);
}
