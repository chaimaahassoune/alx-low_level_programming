# 0x13. C - More singly linked lists

## Description
This project is about working with linked lists in C. The tasks are focused on understanding and implementing linked lists, as well as developing a deeper understanding of memory allocation and dynamic memory allocation.

## File Structure
* **lists.h:** Header file containing all function prototypes and struct definition.
* **0-print_listint.c:** Function that prints all elements of a listint_t list.
* **1-listint_len.c:** Function that returns the number of elements in a linked listint_t list.
* **2-add_nodeint.c:** Function that adds a new node at the beginning of a listint_t list.
* **3-add_nodeint_end.c:** Function that adds a new node at the end of a listint_t list.
* **4-free_listint.c:** Function that frees a listint_t list.
* **5-free_listint2.c:** Function that frees a listint_t list and sets the head to NULL.
* **6-pop_listint.c:** Function that deletes the head node of a listint_t linked list, and returns the head node’s data (n).
* **7-get_nodeint.c:** Function that returns the nth node of a listint_t linked list.
* **8-sum_listint.c:** Function that returns the sum of all the data (n) of a listint_t linked list.
* **9-insert_nodeint.c:** Function that inserts a new node at a given position.
* **10-delete_nodeint.c:** Function that deletes the node at index of a listint_t linked list.

## Usage
* All files are to be compiled on Ubuntu 20.04 LTS using gcc with the options `-Wall -Werror -Wextra -pedantic -std=gnu89`.
* All files should end with a new line.
* The prototypes of all functions and the prototype of the function `_putchar` should be included in your header file called `lists.h`.
* The header file should be guarded against double inclusion.
* No more than 5 functions per file.
* The only C standard library functions allowed are `malloc`, `free`, and `exit`. Any use of functions like `printf`, `puts`, `calloc`, `realloc` etc... is forbidden.
* You are allowed to use `_putchar`.
