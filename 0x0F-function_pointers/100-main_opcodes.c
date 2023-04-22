#include<stdlib.h>
#include<stdio.h>



/**
 * main- Entry point
 *
 *@argc: The number of arguments
 *@argv: The argument values
* 
* Return: 0 in succes, 1 if the argument is invalid or 2 if the values is invalid
*/
int main(int argc, char *argv[])
{
	int p, q;


	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	
	q = atoi(argv[1]);
	
	
	if (q < 0)
	{
		printf("Error\n");
		exit(2);
	}

	
	for (p = 0; p < q; p++)
	{
		printf("%02hhx", *((char *)main + p));
		if (p < q - 1)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
