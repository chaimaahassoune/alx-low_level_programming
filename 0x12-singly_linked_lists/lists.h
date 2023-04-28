#ifndef _LISTS_H
#define _LISTS_H

/**
 * struct list_s - a singly linked list
 * @str: string 
 * @len: length of the string
 * @next: struct
 *
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
int _putchar(char c);


#endif /* _LISTS_H */
