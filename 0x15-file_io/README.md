# 0x15. C - File I/O

In this project, we will learn about file input/output (I/O) in the C programming language. We will learn how to create, open, close, read, and write files using file descriptors. We will also learn about the different file descriptors and their purposes, as well as how to set file permissions.

## Learning Objectives

By the end of this project, you should be able to:

- Look for the right source of information online
- Create, open, close, read, and write files
- Understand file descriptors and their purposes
- Use the I/O system calls `open`, `close`, `read`, and `write`
- Understand and use the flags `O_RDONLY`, `O_WRONLY`, `O_RDWR`
- Understand file permissions and how to set them when creating a file with the `open` system call
- Understand what a system call is and the difference between a function and a system call

## Requirements

- Allowed editors: vi, vim, emacs
- All files will be compiled on Ubuntu 20.04 LTS using gcc with the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All files should end with a new line
- A `README.md` file, at the root of the folder of the project is mandatory
- Code should use the Betty style and be checked using `betty-style.pl` and `betty-doc.pl`
- No global variables are allowed
- No more than 5 functions per file
- Only the C standard library functions `malloc`, `free`, and `exit` are allowed. Any use of functions like `printf`, `puts`, `calloc`, `realloc`, etc. is forbidden
- Allowed syscalls: `read`, `write`, `open`, `close`
- You are allowed to use `_putchar`
- All header files should be include guarded

## Files

The following files are used in this project:

- `main.h`: This header file contains the prototypes of all the functions used in this project, as well as the prototype for the `_putchar` function.
- `0-read_textfile.c`: This file contains the function `ssize_t read_textfile(const char *filename, size_t letters)` which reads a text file and prints it to the POSIX standard output.
- `1-create_file.c`: This file contains the function `int create_file(const char *filename, char *text_content)` which creates a file with the specified filename and writes the specified text content to the file.
- `2-append_text_to_file.c`: This file contains the function `int append_text_to_file(const char *filename, char *text_content)` which appends the specified text content to the end of a file with the specified filename.
- `3-cp.c`: This file contains the function `int main(int argc, char *argv[])` which copies the contents of one file to another file.

