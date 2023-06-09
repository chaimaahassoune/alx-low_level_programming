
# 0x0C. C - More malloc, free

free In this project, we will learn how to use malloc, calloc and realloc functions in C programming.



## Resources

Read or watch:

[Do I cast the result of malloc?](https://intranet.alxswe.com/rltoken/uKhvfzpF3v8Be10NCZlQtA)

## Learning Objectives

At the end of this project, you are expected to be able to explain to anyone, without the help of Google.

## General
How to use the exit function

What are the functions calloc and realloc from the standard library and how to use them

## Requirements
### General
Allowed editors: vi, vim, emacs

All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89

All your files should end with a new line

A README.md file, at the root of the folder of the project is mandatory

Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl

You are not allowed to use global variables

No more than 5 functions per file

The only C standard library functions allowed are malloc, free and exit. Any use of functions like printf, puts, calloc, realloc etc… is forbidden

You are allowed to use _putchar

You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account

In the following examples, the main.c files are shown as examples.

You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). 

We will use our own main.c files at compilation. 

Our main.c files might be different from the one shown in the examples
The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h

Don’t forget to push your header file

## Tasks

### 0. Trust no one
Write a function that allocates memory using malloc.

Prototype: void *malloc_checked(unsigned int b);

Returns a pointer to the allocated memory
if malloc fails, the malloc_checked function should cause normal process termination with a status value of 98
### 1. string_nconcat
Write a function that concatenates two strings.

Prototype: char *string_nconcat(char *s1, char *s2, unsigned int n);

The returned pointer shall point to a newly allocated space in memory, which contains s1, followed by the first n bytes of s2, and null terminated

If the function fails, it should return NULL

If n is greater or equal to the length of s2 then use the entire string s2

if NULL is passed, treat it as an empty string



