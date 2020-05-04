0x18. C - Dynamic libraries

## Learning Objectives
* What is a dynamic library, how does it work, how to create one, and how to use it
* What is the environment variable `$LD_LIBRARY_PATH` and how to use it
* What are the differences between static and shared libraries
* Basic usage of `nm`, `ldd`, and `ldconfig`

## Requirements
* Allowed editors: `vi`, `vim`, `emacs`
* All your files will be compiled on Ubuntu 14.04 LTS
* All your files should end with a newline
* A `README.md` file at the root of the project folder is mandatory

### C
* Your programs and functions will be compiled with `gcc 4.8.4` using the flags `-Wall` `-Werror` `-Wextra` and `-pedantic`
* Your code should use the `Betty` style
* You are not allowed to use global variables
* No more than 5 functions per file
* You are not allowed to use the standard library
* You are allowed to use `_putchar`. You do not have to push it to GitHub
* All prototypes should be included in a header file called `holberton.h`. Remember to push it!

### Bash
* The first line of all your files should be `#!/bin/bash` exactly
* Describe what each script does in your `README.md`
* All your files must be executable

## Files
holberton.h:
	Header file for this project

libholberton.so:
	A dynamic library containing tasks from projects 0x02, and 0x04 through 0x07

1-create_dynamic_lib.sh:
	Creates a dynamic library called `liball.so` from all `.c` files in the current directory

## Author
Cynthia Taylor
May 4, 2020