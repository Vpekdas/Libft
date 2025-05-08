# Libft

## Table of Contents
1. [Description](#description)
2. [Installation](#installation)
3. [Run](#run)
4. [Contributing](#contributing)
5. [License](#license)

## Description

Libft is a project from the 42 Common Core curriculum. It involves reimplementing basic functions from the C standard library, along with some additional functions that are not part of the standard library. 

This is particularly useful because in many 42 Common Core projects, the use of the C standard library is not permitted, so having a custom library of utilities is essential for development.

As part of the 42 curriculum, this project comes with strict coding guidelines:
- The standard C library is forbidden, requiring the use of custom code for all tasks.
- A strict rule of 5 functions per file and 25 lines per function is enforced.
- There are restrictions such as no assignments on the same line and a focus on clean, maintainable code.

### Purpose

The purpose of this project is to create a personal library of functions that can be reused in  common core future projects.

Each function is documented with a comment in the corresponding .c file, providing a brief explanation of what it does and how it can be used.

### Technologies used

- C language.
- Make.

### Challenges and Future Features

This was my first "real" project, and everything felt like a challenge! From understanding the basics of C to reading and deciphering `man` pages, I was learning how to code effectively in C for the first time.

I’m not planning to add any new features at this time.

## Installation

- Ensure you have a C compiler installed, such as [Clang](https://clang.llvm.org/) or [GCC](https://gcc.gnu.org/)
```bash
clang --version
gcc --version
```
- Ensure you have installed [Make](https://www.gnu.org/software/make/) to build the project
```bash
make --version
```

## Run

1. **Build the library**: Compile the project using the provided `Makefile`:
```c
make bonus
```
This will generate the `libft.a` static library, which you can then include in your own C projects.

2. **Include the library in your project**: Add the following line at the top of your source code files:
```c
#include "../includes/libft.h"
```

3. **Compile your own project with the library**: Link the libft library when compiling your project:
```bash
clang your_source.c -L/path/to/library -lft -o your_project_name
```

## Contributing

To report issues, please create an issue here:  [issue tracker](https://github.com/Vpekdas/Libft/issues).

To contribute, follow these steps:

1. **Fork the repository**: Start by forking the repository to your own GitHub account.

2. **Clone the repository**: Clone the forked repository to your local machine.
```bash
git clone https://github.com/Vpekdas/Libft
```

3. **Create a new branch**: Create a new branch for each feature or bug fix you're working on.
```bash
git checkout -b your-branch-name
```

4. **Commit your changes**: Commit your changes.
```bash
git commit -m "Your commit message"
```

5. **Push your changes**: Push your changes to your forked repository on GitHub.
```bash
git push origin your-branch-name
```

6. **Create a pull request**: Go to your forked repository on GitHub and create a new pull request against the master branch.

## License

This project is licensed under the [MIT License](LICENSE).
