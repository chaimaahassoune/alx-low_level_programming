# Dynamic Libraries Project

This project focuses on understanding dynamic libraries in C. It involves creating a dynamic library, exploring the differences between dynamic and static libraries, and using various tools and commands to work with libraries.

## Table of Contents

- [Description](#description)
- [Learning Objectives](#learning-objectives)
- [Requirements](#requirements)
- [Tasks](#tasks)
- [Usage](#usage)
- [Author](#author)

## Description

The project aims to deepen your understanding of dynamic libraries in C programming. It covers topics such as the creation of dynamic libraries, the usage of environment variables, and the differences between static and shared libraries. You will also explore basic commands like `nm`, `ldd`, and `ldconfig` to analyze and work with libraries.

## Learning Objectives

Upon completion of this project, you should be able to:

- Explain what a dynamic library is, how it works, and how to create one
- Understand the purpose and usage of the `$LD_LIBRARY_PATH` environment variable
- Differentiate between static and shared libraries
- Utilize tools like `nm`, `ldd`, and `ldconfig` for library analysis

## Requirements

### C

- Allowed editors: vi, vim, emacs
- Compilation: `gcc` with options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All files should end with a new line
- A `README.md` file at the root of the project folder is mandatory
- Code should follow the Betty style guidelines
- No global variables allowed
- Maximum of 5 functions per file
- Standard library functions like `printf`, `puts`, etc., are forbidden
- `_putchar` function is allowed
- Header file `main.h` should contain function prototypes

### Bash

- Allowed editors: vi, vim, emacs
- All scripts will be tested on Ubuntu 20.04 LTS
- All files should end with a new line
- The first line of all files should be `#!/bin/bash`
- A `README.md` file at the root of the project folder, describing each script's functionality
- All files must be executable

## Tasks

1. **A library is not a luxury but one of the necessities of life:**

   Create the dynamic library `libdynamic.so` containing various functions specified in the task.

2. **Without libraries, what have we? We have no past and no future:**

   Create a script `1-create_dynamic_lib.sh` that compiles all `.c` files in the current directory into a dynamic library named `liball.so`.

For detailed task instructions, please refer to the project instructions provided.

## Usage

To compile and run the programs in this project, start by cloning the repository and navigating to the project directory. Then, use the gcc command to compile the source code, linking it with the libdynamic.so library. Set the library path environment variable to include the current directory using export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH. Finally, execute the compiled program using ./len. Make sure you have the reTo compile and run the programs in this project, start by cloning the repository and navigating to the project directory. Then, use the gcc command to compile the source code, linking it with the libdynamic.so library. Set the library path environment variable to include the current directory using export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH. Finally, execute the compiled program using ./len. Make sure you have the required dependencies and development environment properly configured for successful compilation and execution.

## Author
Chaimaa hassoune
