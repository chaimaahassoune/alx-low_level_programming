# Hash Tables

This project focuses on implementing hash tables in the C programming language. It involves creating a hash table data structure, implementing various functions related to hash tables, and testing them. The project aims to deepen understanding of hash functions, hash tables, collisions, and their applications.

## Table of Contents

- [Introduction](#introduction)
- [Learning Objectives](#learning-objectives)
- [Requirements](#requirements)
- [Files](#files)
- [Testing](#testing)
- [Authors](#authors)
- [License](#license)

## Introduction

Hash tables are data structures that provide efficient key-value storage and retrieval. They use hash functions to compute an index for each key, allowing for fast access to the corresponding value. In this project, we explore the concepts and implementation of hash tables in C.

## Learning Objectives

By completing this project, you are expected to achieve the following learning objectives:

- Understand the concept of a hash function and its role in hash table operations.
- Identify the characteristics of a good hash function and its impact on hash table performance.
- Grasp the working principles of a hash table and how to use it effectively.
- Learn about collisions in the context of hash tables and various collision resolution techniques.
- Analyze the advantages and disadvantages of using hash tables in different scenarios.
- Recognize common use cases where hash tables are applicable.

## Requirements

- Allowed editors: vi, vim, emacs
- All files will be compiled on Ubuntu 20.04 LTS using gcc, with the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All files should end with a new line
- A `README.md` file, at the root of the project folder, is mandatory
- Code should follow the Betty style. It will be checked using `betty-style.pl` and `betty-doc.pl`
- Global variables are not allowed
- Each file should contain no more than 5 functions
- The C standard library is allowed
- Prototypes of all functions should be included in the `hash_tables.h` header file
- Don't forget to push the `hash_tables.h` header file
- All header files should be include guarded

## Files

The project consists of the following files:

- `hash_tables.h`: The header file containing function prototypes and necessary data structures for hash tables.
- `0-hash_table_create.c`: Implementation of the `hash_table_create` function that creates a new hash table.
- `1-djb2.c`: Implementation of the `hash_djb2` function that calculates the hash value using the djb2 algorithm.
- `2-key_index.c`: Implementation of the `key_index` function that calculates the index of a key in the hash table's array.
- `3-hash_table_set.c`: Implementation of the `hash_table_set` function that adds an element to the hash table.
- `4-hash_table_get.c`: Implementation of the `hash_table_get` function that retrieves a value associated with a key from the hash table.
- `5-hash_table_print.c`: Implementation of the `hash_table_print` function that prints the hash table's contents.
- `6-hash_table_delete.c`: Implementation of the `hash_table_delete` function that deletes the hash table.
