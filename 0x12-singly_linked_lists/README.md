# 0x12. C - Singly linked lists

In this project, we will learn about singly linked lists in C. We will explore when and why to use linked lists instead of arrays, how to build and use linked lists, and best practices for working with linked lists in C.

## Learning Objectives

At the end of this project, you should be able to:

- Explain when and why to use linked lists instead of arrays
- Build and use linked lists in C
- Demonstrate best practices for working with linked lists in C

## Requirements

- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All your files should end with a new line
- A README.md file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- You are not allowed to use global variables
- No more than 5 functions per file
- The only C standard library functions allowed are malloc, free, and exit. Any use of functions like printf, puts, calloc, realloc etc… is forbidden
- You are allowed to use _putchar
- You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
- In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
- The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called lists.h
- Don’t forget to push your header file
- All your header files should be include guarded

## Files

The following files should be present in your repository:

### Header File

- lists.h: Header file containing all function prototypes and the definition of the `list_t` structure.

### Source Files

- 0-print_list.c: Function that prints all the elements of a `list_t` list.
- 1-list_len.c: Function that returns the number of elements in a `list_t` list.
- 2-add_node.c: Function that adds a new node to the beginning of a `list_t` list.
- 3-add_node_end.c: Function that adds a new node to the end of a `list_t` list.
- 4-free_list.c: Function that frees a `list_t` list.

### Example Usage

Here's an example program that uses the `list_t` structure and the functions provided in this project:


