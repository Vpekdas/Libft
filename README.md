# Libft - Your very first own library
```
⠀⣀⠀⠤⠴⠶⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⣶⣾⣿⡟⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠂⠉⡇⠀⠀⠀⢰⣿⣿⣿⣿⣧⠀⠀⢀⣄⣀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⢠⣶⣶⣷⠀⠀⠀⠸⠟⠁⠀⡇⠀⠀⠀⠀⠀⢹⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠘⠟⢹⣋⣀⡀⢀⣤⣶⣿⣿⣿⣿⣿⡿⠛⣠⣼⣿⡟⠀⠀⠀⠀
⠀⠀⠀⠀⠀⣴⣾⣿⣿⣿⣿⢁⣾⣿⣿⣿⣿⣿⣿⡿⢁⣾⣿⣿⣿⠁⠀⠀⠀⠀
⠀⠀⠀⠀⠸⣿⣿⣿⣿⣿⣿⢸⣿⣿⣿⣿⣿⣿⣿⡇⢸⣿⣿⣿⠿⠇⠀⠀⠀⠀
⠀⠀⠀⠳⣤⣙⠟⠛⢻⠿⣿⠸⣿⣿⣿⣿⣿⣿⣿⣇⠘⠉⠀⢸⠀⢀⣠⠀⠀⠀
⠀⠀⠀⠀⠈⠻⣷⣦⣼⠀⠀⠀⢻⣿⣿⠿⢿⡿⠿⣿⡄⠀⠀⣼⣷⣿⣿⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠈⣿⣿⣿⣶⣄⡈⠉⠀⠀⢸⡇⠀⠀⠉⠂⠀⣿⣿⣿⣧⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠘⣿⣿⣿⣿⣿⣷⣤⣀⣸⣧⣠⣤⣴⣶⣾⣿⣿⣿⡿⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠇⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠘⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠿⠟⠛⠉⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠉⠉⠉⠉⠉⠉⠉⠉⠉⠀
```


Ahoy, fellow cyber buccaneers! Welcome aboard Libft, the digital galleon where I embarked on my maiden coding voyage at Ecole 42. This project isn't just a chest of C functions; it's the encrypted treasure trove where I first learned to crack the code and sail the binary seas.

Splice the mainframe and prepare to navigate the cyber waves, for Libft be more than a mere library—it be the anchor point of me coding journey, where I learned to hack through the digital storms of C.

Set sail with me, ye code pirates, as we plunder the bits and bytes of programming, and let Libft be the compass that guides ye through the vast cybernetic ocean.

## Table of Contents
- [Overview](#overview)
- [Key Functionalities](#key-functionalities)
  - [String Manipulation Functions](#string-manipulation-functions)
  - [Memory Manipulation Functions](#memory-manipulation-functions)
  - [Character Classification Functions](#character-classification-functions)
  - [Output Functions](#output-functions)
  - [String Handling Functions](#string-handling-functions)
  - [Linked List Functions](#Linked-List-Functions)
- [Getting Started](#getting-started)
- [License](#license)

## Overview

This project is about coding a C library.
It will contain a lot of general purpose functions your programs will rely upon.

## Key Functionalities

### String Manipulation Functions

- `ft_strlen.c`: Calculate the length of a string.
- `ft_strlcpy.c`: Copy strings with a specified size limit.
- `ft_strlcat.c`: Concatenate strings with a specified size limit.
- `ft_strchr.c`: Locate the first occurrence of a character in a string.
- `ft_strrchr.c`: Locate the last occurrence of a character in a string.
- `ft_strncmp.c`: Compare parts of two strings.
- `ft_memchr.c`: Locate the first occurrence of a byte in memory.
- `ft_memcmp.c`: Compare parts of two memory blocks.
- `ft_strnstr.c`: Locate a substring in a string with a specified length.
- `ft_strdup.c`: Duplicate a string.

### Memory Manipulation Functions

- `ft_memset.c`: Fill memory with a constant byte.
- `ft_bzero.c`: Set the first n bytes of memory to zero.
- `ft_memcpy.c`: Copy memory area.
- `ft_memmove.c`: Copy memory area, even if the source and destination overlap.
- `ft_calloc.c`: Allocate and zero-initialize memory.

### Character Classification Functions

- `ft_isalpha.c`: Check if a character is an alphabetic character.
- `ft_isdigit.c`: Check if a character is a digit.
- `ft_isalnum.c`: Check if a character is alphanumeric.
- `ft_isascii.c`: Check if a character is a valid ASCII character.
- `ft_isprint.c`: Check if a character is printable.
- `ft_toupper.c`: Convert a lowercase letter to uppercase.
- `ft_tolower.c`: Convert an uppercase letter to lowercase.

### Output Functions

- `ft_putchar_fd.c`: Output a character to a file descriptor.
- `ft_putstr_fd.c`: Output a string to a file descriptor.
- `ft_putendl_fd.c`: Output a string followed by a newline to a file descriptor.
- `ft_putnbr_fd.c`: Output an integer to a file descriptor.

### String Handling Functions

- `ft_substr.c`: Extract a substring from a string.
- `ft_strjoin.c`: Concatenate two strings.
- `ft_strtrim.c`: Trim leading and trailing whitespaces from a string.
- `ft_split.c`: Split a string into an array of substrings.
- `ft_itoa.c`: Convert an integer to a string.
- `ft_strmapi.c`: Apply a function to each character of a string.
- `ft_striteri.c`: Apply a function to each character of a string with its index.

### Linked List Functions

- `ft_lstnew.c`: Create a new list node.
- `ft_lstadd_front.c`: Add a new node to the beginning of the list.
- `ft_lstsize.c`: Count the number of elements in a list.
- `ft_lstlast.c`: Return the last element of a list.
- `ft_lstadd_back.c`: Add a new node to the end of the list.
- `ft_lstdelone.c`: Delete a node from the list without deleting its content.
- `ft_lstclear.c`: Delete the entire list.
- `ft_lstiter.c`: Apply a function to each element of the list.
- `ft_lstmap.c`: Create a new list resulting from applying a function to each element of the original list.

## Getting Started

To get started with Libft, follow these steps:

### Prerequisites

Before you begin, ensure you have the following prerequisites installed:

- [CC](#) (Your C Compiler, for example, [Clang](https://clang.llvm.org/))
- [Make](https://www.gnu.org/software/make/)

### Installation

1. Clone the repository:

    ```bash
    git clone https://github.com/Vpekdas/Libft
    ```

2. Navigate to the project directory:

    ```bash
    cd libft
    ```

3. Compile the library:

    ```bash
    make
    ```

    This will compile the source files and create the `libft.a` library.

### Usage

Now that the library is compiled, you can use it in your projects.

1. Include the `libft.h` header file in your source files:

    ```c
    #include "libft.h"
    ```

2. Link the `libft.a` library when compiling your project:

    ```bash
    cc your_file.c -o your_executable.
    ```

    Replace `your_file.c` with your source file and `your_executable` with the desired name for your executable.

3. Run your executable:

    ```bash
    ./your_executable
    ```

### Example

Here's a simple example of using Libft functions in a C program:

```c
#include "libft.h"
#include <stdio.h>

int main() {
    char str[] = "Hello, Libft!";
    printf("Length of the string: %zu\n", ft_strlen(str));
    return 0;
}
```

## License

This project is licensed under the MIT License - see the [LICENSE.md](LICENSE.md) file for details.

