#ifndef DOG_H_FILE
#define DOG_H_FILE


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

void init_dog(struct dog *d, char *name, float age, char *owner);
my_dog *new_dog(char *name, float age, char *owner);


#endif /* DOG_H_FILE */

