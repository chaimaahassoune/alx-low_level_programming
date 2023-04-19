#ifndef DOG_H
#define DOG_H
#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - it represente a dog 
 * @name: dog's name
 * @age: the age
 * @owner: the dog's owner
 *
 * Descreption: this struct contains information about a dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} my_dog;

#endif /* DOG_H */
